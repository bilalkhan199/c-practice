#include<iostream>
using namespace std;
int function(int a)
{
	cout<<a;
	if (a==10)
	{
		return a;
	}
	function(a+1);
}

int function1(int b)
{
	if (b==10)
	{
		cout<<b;
		return b;
	}

	function1(b+1);
	cout<<b;

}

int table(int c)
{

	cout<<c*2;
	if (c==10)
	{
		cout<<c*2<<endl;
		return c;
	}
	return table(c+1);
}

int main()
{
	function(1);
	cout<<endl;
	function1(1); //in descending order.
	cout<<endl;
	table(1);     //table of 2
}

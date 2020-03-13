#include<iostream>
using namespace std;
static int x;

int function2(int n)
{
	if(n==0)
	{
		return x;
	}
	x++;
	n--;
	function2(n);
	function2(n);
}
int main()
{
	int n;
	cout<<"Enter number of times : ";
	cin>>n;
	cout<<"Trees made at the back end: "<<function2(n)<<endl;
}



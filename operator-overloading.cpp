//operator overloading
#include<iostream>
using namespace std;

class Practice{
	public:
	int a,b;
	
	friend istream& operator >>(istream &s,Practice &f);
	friend ostream& operator <<(istream &q,Practice &f);
	
	
	Practice operator +(Practice c)
	{
		Practice temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	int operator ++()
	{
		a+=1;
		b+=1;
		cout<<a<<b;	
	}
};

istream& operator >>(istream &s,Practice &f)
{
	cout<<"a:";
	s>>f.a;
	cout<<"b:";
	s>>f.b;
	return s;
}


ostream& operator <<(ostream &s,Practice &f)
{
	cout<<"a:";
	s<<f.a;
	cout<<"b:";
	s<<f.b;
	return s;
}
int main()
{
	Practice p1,p2,p3;
	cin>>p1;
	cout<<p1;
	cout<<endl;
	cin>>p2;
	cout<<p2;
	//+ operator
	p3=p1+p2;
//cout<<p3;
	//++
	++p1;
	
}

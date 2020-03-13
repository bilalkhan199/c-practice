#include<iostream>
using namespace std;

void test_1()
{
	int array1[10];
	int a;
	for (int i=0;i<10;i++)
	{
		cout<<"ENter value: ";
		cin>>a;
		array1[i]=a;
	}
	
	int j=0;
	while (j<5){
		cout<<array1[j];
		j++;
	}
	
	
	int k=5;
	do
	{
		cout<<array1[k];
		k++;
	}
	while (k<10);
	{
		cout<<"finish";
	}
}

int main()
{
   test_1();
}

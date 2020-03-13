#include<iostream>
using namespace std;

int function1(int u=0,int v=0)
{	
	int a[3][3];
	int flag=0;
	int i,k=0;
	for (i=0;i<3;i++)
	{
		for (k=0;k<3;k++)
		{
			a[i][k]=i;
		}
	}
	if(i==3 && k==3)
		;flag=1;

	//recursion

	if (flag==1)
	{	

	cout<<"u: "<<u<<": v"<<v<<" value at a[u][v]= "<<a[u][v]<<endl;	
		if (v==2)
		{
			u++;
			v=-1;
			//cout<<"u"<<u<<v<<endl;
		}		
		if(u!=3)
		{
		function1(u,v+1);
		}
	}
}

int main()
{
	int u,v,n=0;
	function1(u,v);

}

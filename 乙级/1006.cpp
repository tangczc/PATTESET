#include <iostream>
using namespace std;
int main()
{
	int m,n,l;
	cin>>n;
	while(true)
	{
		if(n>1000)
		cin>>n;
		else
		break;
	}
	if(n<10)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<i;
		}
	} 
	else if(n<100)
		{
			m=n%10;
			n=n/10;
			if(m==0)
			{
				for(int i=1;i<=n;i++)
				{
					cout<<"S";
				}
			}
			if(m!=0)
			{
				for(int i=1;i<=n;i++)
				{
					cout<<"S";
				}
				for(int j=1;j<=m;j++)
				{
					cout<<j;
				}
			}
		}
		else
		{
			l=n/100;
			for(int i=1;i<=l;i++)
			{
				cout<<"B";
			}
			n=n%100;
			m=n%10;
			n=n/10;
			if(m==0)
			{
			for(int i=1;i<=n;i++)
			{
				cout<<"S";
			}
																															
			}
			if(m!=0)
			{
				for(int i=1;i<=n;i++)
				{
					cout<<"S";
				}
				for(int j=1;j<=m;j++)
				{
					cout<<j;
				}
			}
		}
	return 0;
} 

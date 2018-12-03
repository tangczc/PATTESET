#include <iostream>
using namespace std;
int main()
{
	int a,a1,b,b1;
	int sum,pa=0,pb=0;
	int n,m,h;
	int i=0,j=0;
	cin>>a>>a1;
	cin>>b>>b1;
	while(true)
	{
		if(a!=0)
		{  
			n=a%10;
			a=a/10;
			if(n==a1)
			i++;
		}
		else
		break;
	}
	while(true)
	{
		if(i<=0)
		{
			break;
		}
		i--;
		pa=pa*h+a1;
		h=10;
	}
	while(true)
	{
		if(b!=0)
		{
			m=b%10;
			b=b/10;
			if(m==b1)
			j++;
		}
		else 
		break;
	}
	while(true)
	{
		if(j<=0)
		{
		break;
		}
		pb=pb*h+b1;
		h=10;
		j--;
	}
		cout<<pa+pb;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
		int n,sum;
		int play1,play1do,play2,play2do;
		int sum1=0,sum2=0;
		cin>>n;
		while(true)
		{
			if(n<=100)
				break;
			else
				cin>>n;	
	    }
		for(int i=0;i<n;i++)
		{											
		cin>>play1>>play1do>>play2>>play2do;
		if(play1+play2==play1do&&play1+play2!=play2do)
			sum2++;
		if(play1+play2==play2do&&play1+play2!=play1do)
			sum1++;
		}
		cout<<sum1<<" "<<sum2<<endl;				
		return 0; 
} 

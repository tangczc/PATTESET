#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,i,team,menber,grade,max = 0,maxgrade;
	int array[1001] = {0};
	scanf("%d",&n);
	while(1)
	{
		if(n < 10000)
			break;
		scanf("%d",&n);
	}
	for(i = 0;i < n;i++)
	{
		scanf("%d-%d %d",&team,&menber,&grade);	
		if(team >= 1 && team < 1000 && menber >= 1 && menber <= 10 && grade >= 0 && grade <= 100)
			array[team] += grade;
		else
		{
			cout<<"worry!"<<"again"<<endl;
		}
	}
	for(i = 1; i < 1000; i++)
	{
		if(array[max] < array[i])
			max = i;
	}	
	cout<<max<<" "<<array[max]<<endl;
	return 0;
}

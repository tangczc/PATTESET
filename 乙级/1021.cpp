#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9},b[10] = {0};
	string app, n;
	cin>>n;
	app = n;
	for(int i = 0;i <= 9 ;i++)
		for(int m = 0;m < app.length();m++)
		{
			if(a[i] == (app[m] - '0'))
				b[i]++;
		}
	for(int j = 0;j < 10 ;j++)
		if(b[j]!=0)
		{
			cout<<j<<":"<<b[j]<<endl;
		}
	return 0;
}

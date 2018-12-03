#include <iostream>
using namespace std;
int fun(int n)
{
	if(n%2==0)
		n = n/2;
	else
		n = (3*n+1)/2;
	return n;
}
int main()
{
	int n , i = 0;
	cin>>n;
	while(true)
	{
		n = fun(n);
		i++;
		if(n==1)
			break;
	}
	cout<<i<<endl;
	return 0;
}

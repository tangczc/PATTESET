#include <iostream>
using namespace std;
int main()
{
	int i;
	int a[10];
	for(i = 0 ; i < 10 ; i++)
	{
		cin>>a[i];
		if(a[i] == '\0')
		{
			break;
		}
	}
	cout << a.lengh;
	return 0;
}

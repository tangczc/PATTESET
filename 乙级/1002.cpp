#include <iostream>
using namespace std;
void py(int n)
{
	switch(n)
	{
		case 1:cout<<"yi";break;
		case 2:cout<<"er";break;
		case 3:cout<<"san";break;
		case 4:cout<<"si";break;
		case 5:cout<<"wu";break;
		case 6:cout<<"liu";break;
		case 7:cout<<"qi";break;
		case 8:cout<<"ba";break;
		case 9:cout<<"jiu";break;
		default:cout<<"ling";break;

	}
}
void fun(int n)
{
	int m;
	while(true)
	{
		if(n > 0 && n < 10)
		{
			py(n);cout<<endl;
			break;
		}
		else if(n >= 10 && n < 99)
		{
			m = n / 10;
			py(m);cout<<" ";
			n = n % 10;
		}
		else
		{
			m = n / 100;
			py(m);cout<<" ";
			n = n % 100;
			if(n == 0)
			{
				py(0);cout<<" ";
				py(0);cout<<endl;
				break;
			}
			else
			{
				m = n /10;
				py(m);cout<<" ";
				n = n % 10;
			}
		}
	}
}
int main(void)
{
	int sum = 0;
	int i = 0;
	char a[100];
	cin>>a;
	while(a[i] !='\0')
	{
		sum += a[i]-'0';
		i++;
	}
		fun(sum);
		return 0;
}

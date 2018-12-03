#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	string c;
	int P=0,A=0,T=0,e=0,s=0,t=0;
	getline(cin,c);
	for(int i=0;i<c.size();i++)
	{
		if(c[i]=='P')
		P++;
		if(c[i]=='A')
		A++;
		if(c[i]=='T')
		T++;
		if(c[i]=='e')
		e++;
		if(c[i]=='s')
		s++;
		if(c[i]=='t')
		t++;
	}
		while(true)
		{
			if(P+A+T+e+s+t==0)
			break;
			if(P>0)
			{
				cout<<"P";
				P--;
			}
			if(A>0)
			{
				cout<<"A";
				A--;
			}
			if(T>0)
			{
				cout<<"T";
				T--;
			}
			if(e>0)
			{
				cout<<"e";
				e--;
			}
			if(s>0)
			{
				cout<<"s";
				s--;
			}
			if(t>0)
			{
				cout<<"t";
				t--;
			}
		}
			return 0;
} 

#include <bits\stdc++.h>
using namespace std;
int main()
{	
	long long num,x;
	int n,i;
	cin>>n;
	while(n--)
	{
		cin>>num;
		x=sqrt(num);
		for(i=2;i*i<=x;i++)
		{
			if(x%i==0)
			break;
		}
		if(x*x==num&&num>1&&i*i>x)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}
	
	return 0;
}
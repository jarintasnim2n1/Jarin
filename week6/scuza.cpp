#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=2e5+7;
int a[N];
ll b[N];
int main()
{  ios::sync_with_stdio(false);
  cin.tie(0);
	int T,i,x,n,q;
	for(cin>>T;T--;)
	{
		cin>>n>>q;
		for(i=1;i<=n;++i) 
			cin>>x,a[i]=max(a[i-1],x),b[i]=b[i-1]+x;
		while(q--)
		{
			cin>>x;
			cout<<b[upper_bound(a+1,a+n+1,x)-a-1]<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int &x:v)
			cin>>x;
		int ans = 0;
		for(int i=30;i>=0;i--)
		{
			int cnt = 0;
			for(int j=0;j<n;j++)
			{
				cnt += ((v[j]>>i)&1);
			}
			ans = __gcd(cnt,ans);
		}
		for(int i=1;i<=n;i++)
			if(ans%i==0)
				cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}
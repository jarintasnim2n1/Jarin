#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
	{
     int n,a,b;
     cin>>n>>a>>b;
     int s=0;
     for(int i=1;i<n;i++)s=max(s,min(a/i,(b/(n-i))));
        cout<<s<<'\n';  
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll>v(n);
      for(ll i=0;i<n;i++)cin>>v[i];
      ll m=0,s=0,mx=0;
      for(ll i=0;i<n;i++){
        m=max(m,v[i]);
        ll d= m-v[i];
        s+=d;
        mx=max(mx,d);
      }
      cout<<s+mx<<'\n';
    }
    return 0;
}






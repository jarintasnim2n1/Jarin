
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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
     for( ll i=0;i<n;i++)cin>>v[i];
     ll ans=v[n-1];
     v[n-1]=0;
     ll m=*max_element(v.begin(),v.end());
     cout<<m+ans<<'\n';
    }
    return 0;
}







#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       vector<ll>v(n),s(n);
       for(ll i=0;i<n;i++)cin>>v[i]>>s[i];
       int f=0;
       for(ll i=1;i<n;i++){
       if(v[i]>=v[0] && s[i]>=s[0])f=1;
       }
     
     if(f){
      cout<<-1<<'\n';
     }
     else cout<<v[0]<<'\n';
    
    }
    return 0;
}







#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>m;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;m[x]++;}
     ll ans=0;
     for(auto [x,y]:m){
        ans+=(max((ll)0,y-m[x-1]));
     }
     cout<<ans<<'\n';
    }
    return 0;
}
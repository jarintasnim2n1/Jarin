#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n),v2(m);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    for(ll i=0;i<m;i++)
    cin>>v2[i];
    ll l=0,r=0,ans=0;
    while(r<m){
        while(v[l]<v2[r] && l<n){
            ans++;l++;
        }
        r++;
        cout<<ans<<' ';
    }
    cout<<'\n';
}
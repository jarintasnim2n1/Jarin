#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  ll t; 
  cin>>t;
  while(t--){
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll> > a(n);
    vector<ll> b(n),ans(n);
    for(ll i=0;i<n;i++) cin>>a[i].first,a[i].second=i;
    for(ll i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++) ans[a[i].second]=b[i];
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<'\n';
}
    return 0;
}

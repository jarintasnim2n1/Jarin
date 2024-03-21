#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n),v2(m),x;
    for(ll i=0;i<n;i++)
    cin>>v[i];
    for(ll i=0;i<m;i++)
    cin>>v2[i];
    ll l=0,r=0;
    while(l<n || r<m){
        if(l==n){
        x.push_back(v2[r]);
        r++;
        continue;
        }
         if(r==m){
        x.push_back(v[l]);
        l++;
        continue;
        }
        if(v[l]<=v2[r]){
          x.push_back(v[l]);
          l++;
        }
        else if(v[l]>=v2[r]){
            x.push_back(v2[r]);
            r++;
        }
      
    }
    for(int i:x)cout<<i<<' ';
    cout<<'\n';
    return 0;
}
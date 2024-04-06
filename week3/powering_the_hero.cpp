
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
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
     priority_queue<ll>p;
     ll ans=0;
     for(ll i=0;i<n;i++){
        if(v[i]==0 && !p.empty()){
            
          ans+= p.top();
          p.pop();
        }
        else p.push(v[i]);
     }
     cout<<ans<<'\n';
    }
    return 0;
}
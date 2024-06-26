
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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
      for(ll i=0;i<n;i++)
        cin>>v[i];
    ll ans=1,cnt=0;
      for(auto i: v){
        if(i==ans)
      {
          cnt++;
          ans++;
      }
      } 
      ll s=n-cnt;
      if(s%k==0) cout<<s/k<<'\n';
      else cout<<s/k+1<<'\n';
    }
    return 0;
}

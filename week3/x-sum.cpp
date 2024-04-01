
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
    ll n,m;cin>>n>>m;
   ll v[n][m];
   for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++)cin>>v[i][j];
   }
   ll ans=INT_MIN,s=0,r=0,c=0;
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        s=v[i][j];
         r=i-1, c=j+1;
        while(r>-1 && c<m){
            s+=v[r][c];
            r--,c++;
        }
         r=i-1,c=j-1;
        while(r>-1 && c>-1){
            s+=v[r][c];
            r--,c--;
        }
         r=i+1,c=j+1;
        while(r<n && c<m){
            s+=v[r][c];
        r++,c++;
        }
        r=i+1,c=j-1;
        while(r<n && c>-1){
            s+=v[r][c];
            r++,c--;
        }
    ans=max(s,ans);
    }
   }
   cout<<ans<<'\n';
    }
    return 0;
}
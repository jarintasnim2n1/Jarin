
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
   vector<ll>v(n),pre(n+1,0);
   for(int i=0;i<n;i++)cin>>v[i];
   pre[0]=v[0];
   for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+v[i];
   }
   while(m--){
    ll l,r,k,s;
    cin>>l>>r>>k;
    r--,l--;
     s=pre[n-1];
    if(l>0)
    s-=(pre[r]-pre[l-1]);
    else s-=pre[r];
    s+=((r-l+1)*k);
   if(s%2==1)
   cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
   }
    }
    return 0;
}
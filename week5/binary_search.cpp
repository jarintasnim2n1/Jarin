#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll n,m;
 cin>>n>>m;
 vector<ll>v(n);
for(ll i=0;i<n;i++)cin>>v[i];
while(m--){
ll l=0,r=n-1,id=-1;
    ll t;
    cin>>t;
while(l<=r){
    ll x=(l+n)/2;
    if(v[x]==t){
        id=x;
        break;
    }
    else if(v[x]>t)r=x-1;
    else l=x+1;
}
if(id)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
 return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n),w(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=0;i<n;i++)cin>>w[i];
    ll c=0;
    unordered_map<ll , ll>mp;
   unordered_map<ll , ll>mq;
    for(auto i:v){
        ll val=i%m;
        mp[val]++;
    }
     for(auto i:w){
        ll val=i%m;
        mq[val]++;
    }
   for(auto it=mp.begin();it!=mp.end();it++){
       ll s=it->first;
       ll p=it->second;
       ll d=(m-s)%m;
       if(mq.find(d)!=mq.end())c+=1LL*(p)*mq[d];
   }
   cout<<c<<'\n';
}
return 0;
}

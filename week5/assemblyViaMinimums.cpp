#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
  ll n;
  cin>>n; 
  ll m=n*(n-1)/2;
  vector<ll>v(m),s(n);
  for(ll i=0;i<m;i++)cin>>v[i];
 sort(v.begin(),v.end());
 for(ll i=0;i<m;i+=--n)cout<<v[i]<<' ';
 cout<<1000000000<<'\n';
  }
 return 0;
}
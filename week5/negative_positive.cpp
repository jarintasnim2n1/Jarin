#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll t;
 cin>>t;
 while(t--){
 ll n;
 cin>>n;
 vector<ll>v(n);
 ll c=0,sum=0,m=INT_MAX;
 for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x<0)c++;
    sum+=abs(x);
    v.push_back(abs(x));
    m=min(m,abs(x));
 }
 if(c&1){
 //ll m=*min_element(v.begin(),v.end());
 cout<<sum-2*m<<'\n';
 }
 else  cout<<sum<<'\n';
 }
 return 0;
 }
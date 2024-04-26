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
 vector<ll>v(n),s(n);
 for(ll i=0;i<n;i++)cin>>v[i];
 sort(v.begin(),v.end(),greater<ll>());

for(int i=0;i<n;i++)cout<<v[i]<<' ';
cout<<'\n';
 }
 return 0;
}
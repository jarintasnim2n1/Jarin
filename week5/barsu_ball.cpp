#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

 ll n;
 cin>>n;
 vector<ll>v(n);
 for(ll i=0;i<n;i++)cin>>v[i];
 ll m;
 cin>>m;
 vector<ll>s(m);
  for(ll i=0;i<m;i++)cin>>s[i];
 sort(v.begin(),v.end());
 sort(s.begin(),s.end());
 ll c=0;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    if(abs(v[i]-s[j])<=1){c++,s[j]=10005;break;}
}
cout<<c<<'\n';
 
 return 0;
}
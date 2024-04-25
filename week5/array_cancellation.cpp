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
 //vector<ll>v(n);
 ll s=0;
 while(n--){
    ll x;
    cin>>x;
 s+=x;
 if(s<0)s=0;
 }
 cout<<s<<'\n';
 }

 return 0;
}
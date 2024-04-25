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
 ll a,b,n;
 cin>>a>>b>>n;
 ll s=0;
 while(n--){
    ll x;
    cin>>x;
    s+=(min(a-1,x));
 }
 cout<<s+b<<'\n';
 }

 return 0;
}
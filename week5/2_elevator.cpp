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

 ll a,b,c;
 cin>>a>>b>>c;
 ll x=a-1;
 ll y=abs(b-c)+(c-1);
if(y>x)cout<<1<<'\n';
else if(x==y)cout<<3<<'\n';
else cout<<2<<'\n';
 }
 return 0;
}
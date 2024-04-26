#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n; 
  while(n--){
    ll a,b,n,s;
cin>>a>>b>>n>>s;

  (s%n<=b && (a*n+b>=s))?cout<<"YES"<<'\n':cout<<"NO"<<'\n';
}
return 0;
}
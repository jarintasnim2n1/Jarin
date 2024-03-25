#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s,x;
    cin>>s>>x;
    int f=0;
    for(ll i=0;i<n;i++){
   if(s[i]==x[i] || ((s[i]=='G' || s[i]=='B') && (x[i]=='G' || x[i]=='B')))
    f=1;
    else { f=0;break;}
    }
    if(f)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
return 0;
}
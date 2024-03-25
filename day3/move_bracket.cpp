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
    string s;
    cin>>s;
    int f=0,ans=0;
    for(ll i=0;i<n;i++){
   if(s[i]=='(')
    f++;
    else {
         if(f>0)f--;
         else if(f==0)ans++;
         }
    }
   cout<<ans<<'\n';
  }
return 0;
}
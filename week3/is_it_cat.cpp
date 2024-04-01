
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
    int n;cin>>n;
   string s;
   cin>>s;
   for(auto & i:s)
   i=tolower(i);
   s.erase(unique(s.begin(),s.end()),s.end());
   if(s=="meow")
   cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
 
    }
    return 0;
}
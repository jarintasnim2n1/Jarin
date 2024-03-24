#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      for(int i=0;i<n;i++){
        if(v[i]!=s)
        cout<<v[i]<<' ';
      }
        cout<<'\n';          
}
    return 0;
}
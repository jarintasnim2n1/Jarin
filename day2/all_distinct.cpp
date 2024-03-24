#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<int>v;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
      }
      if((n-v.size())%2==0)
        cout<<v.size()<<'\n'; 
        else cout<<v.size()-1<<'\n';         
}
    return 0;
}
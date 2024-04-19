#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int ans; cin>>ans;
    int x;
    for(int i=1;i<n;i++)cin>>x,ans&=x;
      cout<<ans<<"\n";
  }
    return 0;
}

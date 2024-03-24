#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        string n,s;
        cin>>n>>s;
        int c=0;
       for(int i=0;i<n.size();i++){
        if(n[i]!=s[i])
       c++;
       }
        cout<<c<<'\n';          
 }
  return 0;
}
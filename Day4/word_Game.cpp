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
        map<string,int>mp;
        ll n;
        cin>>n;
        string s[3][n];
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
            cin>>s[i][j];
            mp[s[i][j]]++;
            }
        }
         for(int i=0;i<3;i++){
            int ans=0;
            for(int j=0;j<n;j++){
           if(mp[s[i][j]]==1)ans+=3;
           else if(mp[s[i][j]]==2)ans+=1;
            }
            cout<<ans<<' ';
        }
        cout<<'\n';
    }
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       
       string s;
        cin>>s;
      ll  n=s.size();
        int f=0,g=0;
        for(int i=0;i<n;i++){

            if(s[i]=='1')f++;
            else g++;
        }
 ll ans=min(g,f);
      if( ans%2)
         cout<<"DA"<<'\n';
       else cout<<"NET"<<'\n';
    }
    return 0;
}
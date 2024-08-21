#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
      if((n[0]=='b' && n[2]=='a') ||(n[0]=='c' && n[2]=='b') )
         cout<<"NO"<<'\n';
         else
        cout<<"YES"<<'\n';
       
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();  
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
     if(b%a==0)cout<<b*b/a<<'\n';
     else cout<<b*a/__gcd(a,b)<<'\n';
      }
    
    return 0;
}
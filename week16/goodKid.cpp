#include<bits/stdc++.h>
using namespae std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>q(n);
        for(ll i=0;i<n;i++){
           
            cin>>q[i];
           
        }
        sort(q.begin(),q.end());
        int x=q[0];
        q[0]=x+1;
        ll s=1;
        for(ll i=0;i<n;i++){
           s=1LL*s*q[i];
        }
        cout<<s<<'\n'
       
    }
    return 0;
}
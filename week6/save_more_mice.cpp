#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k);
    for(ll i=0;i<k;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll c=0,m=0;
    for(ll i=0;i<k;i++){
    if(m<v[i]){
        c++;
        m+=n-v[i];
    }
    else break;
    }
    cout<<c<<'\n';
}
return 0;

}
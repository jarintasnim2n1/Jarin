#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
   // cin >> t;
    while (t--) {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll ans=0,l=0,r=0;
    set<ll>s;
 while(l<n && r<n){
    while(r<n && !s.count(v[r])){
        s.insert(v[r]);
        ans=max(ans,r-l+1);
        r++;
    }
    while(r<n && s.count(v[r])){
        s.erase(v[l]);
        l++;
    }
    }
    cout<<ans<<'\n';
    }
    return 0;
}
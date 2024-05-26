#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll s=0,c=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
            if(v[i]==1)c++;
        }
       if(s>=c+n && n>1)cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
    }
    return 0;
}
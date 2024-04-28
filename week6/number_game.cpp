#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
  cin.tie(0);
	ll t;
	cin>>t;
	while (t--){
        ll n;
		cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        if(n&1)cout<<v[n-1]<<'\n';
        else cout<<0<<'\n';
		
	}
    return 0;
}



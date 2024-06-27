	#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 ll t; cin>>t;
  while( t--){
    ll n;cin>>n;
	map<ll,ll>mp;
	string s;
	cin>>s;
	ll ans=n*(n+1)/2;
	
	ll o=0,z=0;
	mp[0]=1;
	for(auto it:s){
		if(it=='0')z++;
		else o++;
		
		if(mp[o-z]){
			ans+=mp[o-z];
		}
		
		mp[o-z]++;
	}
	
	
	cout<<ans<<'\n';
  }
}
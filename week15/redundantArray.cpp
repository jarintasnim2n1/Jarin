#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    ll arr[n];
	    
	    map<ll, ll> mp;
	    
	    for(ll i = 0;i<n;i++){
	        cin >> arr[i];
	        mp[arr[i]]++;
	    }
	    
	   ll mval = INT_MAX;
	    
	    for(auto it : mp){
	        mval = min(mval, (ll)(n-it.second)*it.first);
	    }
	    
	    cout << min(mval, (ll)n) <<'\n';
	}

}
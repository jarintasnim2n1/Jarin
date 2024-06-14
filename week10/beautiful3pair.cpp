#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
int main(){
 ios::sync_with_stdio(false);
 cin.tie(NULL);
  
  ll t;
  cin>>t;
  while(t--){
   ll n, a, b, c;
		ll ans{0};
		cin >> n >> a >> b;
		map <vector<ll>, ll> m;
		for(ll i=2; i<n; i++){
			cin >> c;
			ans+=m[{0, b, c}]++;
			ans+=m[{a, 0, c}]++;
			ans+=m[{a, b, 0}]++;
			ans-=3*m[{a, b, c}]++;
			a=b;
			b=c;
		}
		cout << ans << "\n";
  }
    return 0;
}

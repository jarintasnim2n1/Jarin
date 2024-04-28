#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=1e9+5;
int main(){
    ios::sync_with_stdio(false);
  cin.tie(0);
	ll t;
	cin>>t;
	while (t--){
		ll n,k;
        cin>>n>>k;
        ll c=k/(n-1);
        if((k+c)%n==0)
        cout<<k+c-1<<'\n';
        else cout<<k+c<<'\n';
	}
    return 0;
}



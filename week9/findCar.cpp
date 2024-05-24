
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],b[100005];
int  main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k,q;
		cin>>n>>k>>q;
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		for(int i=1;i<=k;i++){
			cin>>b[i];
		}
		while(q--){
			ll x;
			cin>>x;
			ll xb=upper_bound(a+1,a+1+k,x)-a-1;
			ll ans=b[xb]+(x-a[xb])*(b[xb+1]-b[xb])/(a[xb+1]-a[xb]);
			cout<<ans<<" ";
		} 
	}
	return 0;
}
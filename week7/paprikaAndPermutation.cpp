#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
      ios::sync_with_stdio(false);
  cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,ans=0,l=0;
		cin>>n;
		ll a[n+2],b[n+2];
		for(ll i=1;i<=n;i++)b[i]=0;
		for(ll i=1;i<=n;i++){
			ll x;
			cin>>x;
			if(x<=n&&b[x]==0)b[x]=1;
			else a[++l]=x;	
		}
		sort(a+1,a+1+l);
		ll tt=0;
		for(ll i=1;i<=n;i++){
			if(b[i]==1)continue;
			if(a[++tt]==i)continue;
			if(ans==-1)break;
			if(a[tt]<=2*i)ans=-1;
			else ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

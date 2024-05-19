#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll>v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,k;
	cin>>t>>k;
	if((k-t)%2==0)cout<<"NO"<<'\n';
    else{
        cout<<"YES"<<'\n';
        for(ll i=t;i<=k;i+=2){
        cout<<i<<' '<<i+1<<'\n';
        }
    }
    return 0;
}
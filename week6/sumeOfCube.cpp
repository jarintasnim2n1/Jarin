#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
  cin.tie(0);
	ll t,x;
	cin>>t;
	while (t--){
		cin>>x;
		long long a, b, c=0;
		for( a=1; a<cbrt(x); a++){
			b=cbrt(x-pow(a, 3));
			if(pow(b, 3)+pow(a, 3)==x){
				 c=1; break;
			}
		}
		if(c)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
	}
}



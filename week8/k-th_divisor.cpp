#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll>v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    	int t=1;
	//cin>>t;
	while(t--){
	     ll n,k;
	     cin>>n>>k;
        for(ll i=1;i<=sqrt(n);i++){
            if(n%i==0){
                v.push_back(i);
                if(sqrt(n)!=i) {v.push_back(n/i);}
            }
        }
        sort(v.begin(),v.end());
	     if(v.size()<k){
	         cout<<"-1"<<endl;
	     }
	     else{
	         cout<<v[k-1]<<endl;
	     }
	}

    return 0;
}
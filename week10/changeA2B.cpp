#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
ll t;
cin>>t;
while(t--){
    ll a,b,k,s=0;
    cin>>a>>b>>k;
   
    while(true){
        if(b%k==0 && b/k>=a)s++,b/=k;
       
        else if(b%k==0){s+=(b-a);
        break;
        }
        else {
            s+=(b%k);
            b-=(b%k);
        }
    }
    cout<<s<<'\n';
}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	 ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
 ll t;
 cin>>t;
 while(t--){
     ll n;
     cin>>n;
     if(n==3)cout<<1<<" "<<2<<" "<<3<<'\n';
     else if(n%2==0){
         for(int i=1;i<=n/2;i++)cout<<i<<" "<<n-i+1<<" ";
         cout<<'\n';
     }
     else {
        // if(n==1)cout<<n<<'\n';
         
             for(int i=1;i<=n/2;i++){
               cout<<i<<" "<<n-i<<" ";
             }
               cout<<n<<'\n';
         
     }
 }
 return 0;
}

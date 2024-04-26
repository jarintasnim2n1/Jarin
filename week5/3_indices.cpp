#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll t;
 cin>>t;
 while(t--){
 ll n;
 cin>>n;
 vector<ll>v(n);
 for(ll i=0;i<n;i++)cin>>v[i];
 ll l=0,r=1,k=2,c=0;
 while(l<r && r<k && k<n){
 if(v[l]<v[r] && v[r]>v[k]){
   c=1;
    break;
 }
 else l++,r++,k++;
 }
 if(c==1){cout<<"YES"<<'\n';
    cout<<l+1<<" "<<r+1<<" "<<k+1<<'\n';
 }
 else cout<<"NO"<<'\n';
 }
 return 0;
}
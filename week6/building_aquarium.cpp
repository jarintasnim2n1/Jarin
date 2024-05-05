#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ios::sync_with_stdio(false);
  cin.tie(0);
int t;cin>>t;
while(t--){
ll n,x; cin>>n>>x;
vector<ll> a(n);
for(int i=0;i<n;i++) cin>>a[i]; 
ll ans = 1e9;
ll l=1,h=2e9;
while(l<=h){
ll mid = (h+l)/2;
ll sum=0;
for(auto it : a) if(it<mid) sum += (mid-it);
if(sum<=x){
    ans = mid;
    l = mid+1;
}
else{
    h = mid-1;
}
}
cout<<ans<<endl;
}
}
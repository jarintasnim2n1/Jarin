#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, k, i;
    cin>>n>>k;
    vector<ll>v(n);
    for(i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(i=n/2+1; i<n; i++){
        ll t=min(v[i]-v[n/2], k/(i-n/2));
        k-=t*(i-n/2);
        v[n/2]+=t;
    }
    v[n/2]+=k/(n-n/2);
    cout<<v[n/2];
    return 0;
}
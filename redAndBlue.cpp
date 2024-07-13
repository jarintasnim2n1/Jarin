#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll mx1=0,mx2=0,sum=0,cnt=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            mx1=max(sum,mx1);
        }
        ll m;
        cin>>m;
        ll b[m];
        for(ll i=0; i<m; i++)
        {
            cin>>b[i];
            cnt+=b[i];
            mx2=max(cnt,mx2);
        }
        cout<<mx1+mx2<<endl;
    }
}
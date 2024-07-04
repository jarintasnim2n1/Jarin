#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2!=0)
        {
            for(ll i=0;i<n;++i)
                cout<<1<<" ";
        }
        else{
                if(n==2)
                cout<<1<<" "<<3<<'\n';
        else{
           cout<<1<<" "<<3<<" ";
           for(ll i=0;i<n-2;++i)
            cout<<2<<" ";
        }
        }
        cout<<'\n';
    }
}

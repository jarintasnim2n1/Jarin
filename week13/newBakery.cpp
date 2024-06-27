
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;

        if(b<=a)
        {
            cout<<n*a<<endl;
        }
        else
        {
            ll k=min(b-a,n);
            ll s =((k * (b + (b - k + 1))) / 2) +(n-k)*a;
            cout<<s<<'\n';
        }
    }
    return 0;
}






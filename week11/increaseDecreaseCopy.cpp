#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define case(i, n) Case << " " << i << ": " << n << endl;
#define tc  ll t;cin >> t; while (t--)


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll brr[n+1];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(ll i=0; i<=n; i++)
        {
            cin>>brr[i];
        }

        bool flag =false;
        ll mi = 10000000000;
        ll need  = 0;

        ll ans = 0;
        for(ll i=0; i<n; i++)
        {
            ans+=abs(arr[i]-brr[i]);
            if((arr[i] <= brr[n] && brr[n] <= brr[i]) || (arr[i] >= brr[n] && brr[n] >= brr[i]))
            {
                flag = true;
            }
            if(mi>= abs(arr[i]-brr[n])){
                mi= abs(arr[i]-brr[n]);
                need = arr[i];
            }
            if(mi>= abs(brr[i]-brr[n])){
                mi= abs(brr[i]-brr[n]);
                need = brr[i];
            }
        }

        if(flag)
        {
            ans++;
        }
        else
        {
            ans+=abs(need-brr[n]);
            ans++;
        }

        cout<<ans<<endl;

    }

    return 0;
}

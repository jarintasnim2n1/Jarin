
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
    while(t--)
    {
       string s;
       cin>>s;
       if(s=="abc"  || s=="bac" || s=="cba" || s=="acb")cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';

    }
    return 0;
}






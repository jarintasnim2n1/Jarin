
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
        ll n,k;
        cin>>n>>k;
        ll c=0;
      while(n!=0){
        if(n%k==0)
     n/=k,c++;
     else {ll r=n%k; n-=r,c+=r;}
      }
     cout<<c<<'\n';
    }
    return 0;
}






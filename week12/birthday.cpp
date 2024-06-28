
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       vector<ll>v(n),s,p;
       for(ll i=0;i<n;i++)cin>>v[i];
       sort(v.begin(),v.end());
       deque<ll>d;
       for(ll i=0;i<n;i++){
       if(i&1)d.push_back(v[i]);
       else d.push_front(v[i]);
       }
     
      for(ll i=0;i<n;i++){cout<<d.front()<<" ";
      d.pop_front();}
      cout<<'\n';
    
    }
    return 0;
}






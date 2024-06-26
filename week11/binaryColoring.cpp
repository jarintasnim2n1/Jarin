
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;


        vector<ll>ans;
        while(n>0)
        {
            if(n%2==0)
            {
                ans.push_back(0);
            }
            else if(n%4==1)
            {
                ans.push_back(1);
                n-=1;
            }
            else
            {
                ans.push_back(-1);
                n+=1;
            }
            n/=2;
        }

        cout<<ans.size()<<endl;
        for(ll i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
       
    }
}


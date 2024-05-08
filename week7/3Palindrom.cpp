#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
	ll t=1;
// cin>>t;
	while(t--)
	{
   ll n;
   cin>>n;
   if(n==1)
   cout<<"a"<<'\n';
   else if(n==2)
   cout<<"ab"<<'\n';
   else{
    for(int i=1;i<=n/2;i++){
  cout<<"bba"<<'\n';
    }
   }
    
    }
    return 0;
}
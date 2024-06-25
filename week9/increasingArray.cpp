#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll n,x,i;
cin>>n;
vector<int>s;
for( i=0;i<n;i++){
  cin>>x;
s.push_back(x);
}
ll c=0;
for( i=1;i<n;i++)
{
  if(s[i]>=s[i-1])
  continue;
c+=abs(s[i]-s[i-1]);
s[i]=s[i-1];
}
cout<<c<<'\n';
return 0;
 
 }

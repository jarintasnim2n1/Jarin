#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll n,i;
cin>>n;
 
    if(n==2 || n==3){
    cout<<"NO SOLUTION"<<'\n';
    }
    else {
for( i=2;i<=n;i=i+2){
  cout<<i<<" ";
 
}
 
for( i=1;i<=n;i=i+2)
{
 cout<<i<<" ";
}
    }
return 0;
 
 }

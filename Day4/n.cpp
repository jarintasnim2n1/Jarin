#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll s=0,n;
int x;
cin>>n;
for(int i=0;i<n-1;i++)cin>>x, s+=x;
cout<<n*(n+1)/2-s;
}
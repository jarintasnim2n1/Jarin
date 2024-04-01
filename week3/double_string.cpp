
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    map<string,bool>m;
   string s[n];
    for(int i=0;i<n;i++){
   cin>>s[i];
   m[s[i]]=true;}

   for(int i=0;i<n;i++){
   bool f=0;
   for(int j=1;j<s[i].size();j++){
    string x=s[i].substr(0,j);
    string y= s[i].substr(j,s[i].size()-j);
   if(m[x] && m[y])f=1;
   }
   cout<<f;
   }
    cout<<'\n';
    }
    return 0;
}
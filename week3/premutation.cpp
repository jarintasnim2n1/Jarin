
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
  int v[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++)cin>>v[i][j];
  }
   
        if(v[0][0]!=v[1][0] && v[0][0]!=v[2][0]){cout<<v[1][0]<<' ';
        for(int i=0;i<n-1;i++)cout<<v[0][i]<<' ';
        cout<<'\n';
        }
        else{
            for(int i=0;i<n;i++){
            if(v[0][0]!=v[i][0]){cout<<v[0][0]<<' ';
        for(int j=0;j<n-1;j++)cout<<v[i][j]<<' ';
        cout<<'\n';break;
         }  
            }
        }
  
     }
   
}
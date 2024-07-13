#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int f=0,b=0;
        for(int i=1;i<=n;i++){
         if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
            b=1;
         }
        else if(s[i-1]=='.') f++;

        }
        if(b)cout<<2<<'\n';
        else
        cout<<f<<'\n';
    }
    return 0;
}
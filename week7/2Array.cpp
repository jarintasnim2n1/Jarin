#include <bits/stdc++.h>
using namespace std;

int a[105],b[105];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n, f=1; cin>>n; 
        for(int i =0; i<n;i++)cin>>a[i]; 
        for(int i =0; i<n;i++)cin>>b[i];
        sort(a,a+n); sort(b,b+n); 
        for(int i =0; i<n;i++)if(a[i]>b[i] or a[i]+1<b[i])f=false;
        f?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    }
    return(0);
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){cin>>v[i];}
    
    sort(v.begin(),v.end());
    int f=0;
    for(int i=1;i<=n;i++){
    if(v[i-1]>i){f=1;
    break;
    }
    }
    if(!f)
    cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
return 0;
}

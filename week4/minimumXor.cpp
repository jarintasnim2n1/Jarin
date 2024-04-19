#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int x=0;
        for(int i=0;i<n;i++)x=x^v[i];
        int ans=x;
        for(int i=0;i<n;i++){
            ans=min(ans,x^v[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}

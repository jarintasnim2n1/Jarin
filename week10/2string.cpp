#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
      string s,s1;int c=0;
        cin>>s>>s1;
        ll n=s.size();
        for(ll i=0;i<n;i++){
            if(s[i]=='0' && s1[i]=='0' && s[i+1]=='1' && s1[i+1]=='1' ){c=1;break;}
        }
       if(c)cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
    }
    return 0;
}
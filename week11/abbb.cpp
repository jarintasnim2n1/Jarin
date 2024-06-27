#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t,n;
    cin >>t;
    while(t--){
        string s;
        cin>>s;
        n=s.size();
        stack<char>st;
        for(ll i=0;i<n;i++){
            if(!st.empty() && s[i]=='B' ){
                if(st.top()=='A' || st.top()=='B')st.pop();
                }
            else st.push(s[i]);
        }
    
    cout <<st.size() << '\n';
    }
    return 0;
}
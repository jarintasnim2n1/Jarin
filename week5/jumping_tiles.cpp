#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        vector<int> a[26];
        for(int i=0;i<s.size();i++) {
            a[s[i] - 'a'].push_back(i);
        }
        int start=s[0] - 'a',end=s.back() - 'a';
        vector<int> ans;
        for(int i=start;;i<=end?i++:i--) {
            for(auto j:a[i]) ans.push_back(j+1);
            if(i==end) break;
        }
        cout << abs(end-start) << ' ' << ans.size() << endl;
        for(auto n:ans) {
            cout << n << ' ';
        }
        cout << endl;
    }
 return 0;
}
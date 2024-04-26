 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
 int n, c, ans = 0; cin >> n >> c;
    priority_queue<int> q;
    for(int i = 1, x; i <= n; ++i) {
        cin >> x;
        q.push(-x - i);
    }
    while(!q.empty()) {
        int x = -q.top(); q.pop();
        if(x > c) break;
        ++ans;
        c -= x;
    }
    cout << ans << "\n";
  }
}
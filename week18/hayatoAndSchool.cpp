#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> o;
    vector<int> e;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x&1) o.push_back(i+1);
      else e.push_back(i+1);
    }
    if (o.size() >= 3) {
      cout << "YES\n";
      cout << o[0] << ' ' << o[1] << ' ' << o[2] << '\n';
    }
    else if (o.size() >= 1 && e.size() >= 2) {
      cout << "YES\n";
      cout << o[0] << ' ' << e[0] << ' ' << e[1] << '\n';
    }
    else cout << "NO\n";
  }
}
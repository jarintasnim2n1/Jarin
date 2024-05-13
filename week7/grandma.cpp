#include <bits/stdc++.h>
using namespace std;
int main() {
 ios::sync_with_stdio(false);
  cin.tie(0);
	int t; 
    cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int ans = n + 1;
		for(int i=0;i<26;i++){
			int l = 0 , r = n - 1 , count = 0;
			while(l <= r){
				if(s[l] == s[r]) l++ , r--;
				else if(s[l] == char('a' + i)) count++ , l++;
				else if(s[r] == char('a' + i)) count++ , r--;
				else{
					count = n + 1;
					break;
				}
			}
			ans = min(ans , count);
		}
		if(ans == n + 1) cout << -1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
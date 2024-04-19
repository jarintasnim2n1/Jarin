#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    int i, j, n, sum = 0, subSum = 0;
    cin >> n;
    vector<int>v(n);
    bool ans = false;
    for(i=0; i<n; i++) {
        cin >> v[i];
        sum += v[i];
    }   
    if(sum%360 == 0) ans = true;
    for(i=0; i<(1<<n); i++) {
        subSum = 0;
        for(j=0; j<n; j++) {
            if(i & (1<<j)) {
                subSum += v[j];
            }
        }
        if(sum-subSum == subSum || (subSum-(sum-subSum))%360 == 0) {
            ans = true;
            break;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
}
  	 	    		 	  	  			 		 	 		
#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int32_t main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n, m, i, j, k;
    cin >> n >> m;
    string a[n];
    int ans = 10000, dis, sum;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            sum = 0;
            for(k = 0; k < m; k++){
                dis = abs(a[i][k] - a[j][k]);
                sum+=dis;
            }
            if(sum < ans){
                ans = sum;
            }
        }
    }
 
    cout<< ans<<'\n';
  }
  return 0;
}
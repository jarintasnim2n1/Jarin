#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
bool solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll>c(n);
    for(ll i = 0; i < n; i++) cin >> c[i];
    ll left = 0, right = 0, i = 0, j = n - 1;
    ll k_left = k, k_right = k;

    if (c[0] == c[n - 1]){
        k_left = k / 2;
        k_right = k - k_left;
    }
    for(; i < n && left < k_left; i++){
        if(c[i] == c[0]) left++;
    }
    for(; j >= 0 && right < k_right; j--){
        if(c[j] == c[n - 1]) right++;
    }
    return (i - 1) < (j + 1);
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }

}
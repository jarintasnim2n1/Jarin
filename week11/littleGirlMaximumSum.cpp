#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }
    vector<ll> d(n + 1);
    for (ll i = 1;i <= q;i++) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    for (ll i = 1;i <= n;i++) {
        d[i] = d[i - 1] + d[i];
    }

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

 ll ans = 0;
    for (ll i = 0;i < n;i++) {
        ans += (1LL * d[i] * a[i]);
    }
    cout << ans << '\n';
    return 0;
}
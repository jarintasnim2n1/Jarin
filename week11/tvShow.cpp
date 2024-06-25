#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<ll, ll> d;
    for (ll i = 1;i <= n;i++) {
        ll l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    ll sum = 0;
    bool ok = true;
    for (auto [idx, value] : d) {
        sum += value;
        if (sum > 2) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}
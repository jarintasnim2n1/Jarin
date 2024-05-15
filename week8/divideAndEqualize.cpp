#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        map<int, int> cnt;
        for (int i = 0;i < n;i++) {

            for (int j = 2;j * j <= a[i];j++) {
                if (a[i] % j == 0) {
                    while (a[i] % j == 0) {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1) {
                cnt[a[i]]++;
            }
        }

        bool f= 1;

        for (auto [x, y] : cnt) {
            if (y % n != 0) {
                f = 0;
                break;
            }
        }

        if (f) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
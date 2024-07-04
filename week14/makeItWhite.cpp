#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t= 1;
    cin >> t;
    while (t--) 
    {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll first = 0, last = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B') 
        {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            last = i;
            break;
        }
    }

    cout << last - first + 1 <<'\n';
}
}

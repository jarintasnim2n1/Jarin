#include <iostream>

using namespace std;

int t, a, b;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (a ^ b) << "\n";
    }
    return 0;
}
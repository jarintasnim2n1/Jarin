#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	 ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int mn = INT_MAX;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	        cin >> v[i];
	    for(int i=1;i<n-1;i++)
	    {
	        mn = min(mn, max(abs(v[i] - v[i-1]), abs(v[i] - v[i+1])));
	    }
	    mn = min(mn, abs(v[1] - v[0]));
	    mn = min(mn, abs(v[n-1] - v[n-2]));
	    cout << mn << endl;
	}

}
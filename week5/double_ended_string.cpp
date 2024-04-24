#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
      ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
	int t; cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		int n = a.size(), m = b.size();
		int mn = 0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(b.find(a.substr(i,j-i+1)) != string::npos){
					mn = max(mn, j-i+1);
				}
			}
		}
		cout << (n + m - 2*mn) << endl;
	}
	return 0;
}
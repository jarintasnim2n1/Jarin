#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    	int t;
	cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     string s;
	     cin>>s;
	     
	     int one =0,zero = 0;
	     for(int i=0; i<n; i++){
	         if(s[i] == '0'){
	             zero++;
	         }
	         else{
	             one++;
	         }
	     }
	     int minPair = min(one,zero);
	     if(minPair%2==0){
	         cout<<"Ramos"<<endl;
	     }
	     else{
	         cout<<"Zlatan"<<endl;
	     }
	}
	return 0;
    return 0;
}
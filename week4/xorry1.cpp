#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll e=x,count=0;
        while(e>1){
            e=e/2;
            count++;
        }
        ll temp=pow(2,count);
        cout<<x-temp<<" "<<temp<<endl;
    }
}
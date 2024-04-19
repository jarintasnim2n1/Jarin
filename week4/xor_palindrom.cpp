#include<bits/stdc++.h>
using namespace std;
int t,n;string s;
int main(){
    cin >> t;
    while(t --){
        cin >> n >> s;s = " " + s;int res = 0;
        for(int i = 1;i <= n/2;i ++) res += (s[i] != s[n-i+1]);
        for(int i = 0;i <= n;i ++){
            if(i < res) cout << "0";
            else if((i >= res && i + res <= n) && ((i-res) % 2 == 0 || n & 1)) cout << "1";
            else cout << "0";
        }cout << "\n";
    }
}
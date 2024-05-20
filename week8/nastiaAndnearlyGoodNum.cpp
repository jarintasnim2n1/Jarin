#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll>v;
int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
    ll x;
    cin >> x;
    while(x--){
    ll a,b;
    cin>>a>>b;
    if(b>1){
        cout<<"YES"<<'\n';
    cout <<a<<" "<<a*b<<" "<<a*(b+1)<< endl;
    }
    else cout<<"NO"<<'\n';
    }
}    
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 vector<ll>v;
 ll gcd(ll a, ll b) {
    return __gcd(a, b);
}
ll lcm(ll a, ll b) {
    return ((a / gcd(a, b)) * b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,p,q,m=0;
	cin>>n>>a>>b>>p>>q;
	 m+=((p*(n/a) )+(q*(n/b)));
    m-=(min(p,q)*(n/lcm(a,b)));
        cout<<m<<'\n';
    
    return 0;
}
#include<iostream>
using namespace std;
int main() {
int t,n,x;
cin>>t;
while(t--) {
cin>>n;
int a=0,b=2047;
while(n--) {
cin>>x;
a|=x;
b&=x;
}
cout<<a-b<<endl;
}
}
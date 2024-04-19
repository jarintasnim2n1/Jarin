#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int x=0;
        int ans=0;
   for(int i=0;i<n-k+1;i++){
            for(int j=i;j<i+k;j++){
                if(a[j]%2!=0){
                x=1;break;}
            }if(x==1)ans++;
            x=0;
        }
        cout<<ans<<endl;}
    
	// your code goes here
	return 0;
}
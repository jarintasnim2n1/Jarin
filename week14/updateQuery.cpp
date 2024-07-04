#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
   ll t;
   cin>>t;
   while(t--){
        ll n,m;cin>>n>>m;
        string s;cin>>s;
        ll arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }

        string st;cin>>st;
        sort(arr,arr+m);
        sort(st.begin(),st.end());

        ll i=0, j=m-1;
        string re = "";
        for(int k=0;k<m-1;k++){
            if(arr[k] != arr[k+1]){
                re+=st[i];
                i++;
            }else{
                re+=st[j];
                j--;
            }
        }

        re+=st[j];

        for(int i=0;i<m;i++){
            s[arr[i]-1] = re[i];
        }

        cout<<s<<endl;
    }
}

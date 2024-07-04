#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int x;
    cin>>x;
    while(x--){
    string s;
    cin>>s;
    int o=0,z=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')o++;
        else z++;
    }
    for(auto c:s){
        if(c=='1'){
            if(z!=0)z--;
            else break;}
        else if(c=='0'){
            if(o!=0)o--;
            else break;
        }
    }
    cout<<o+z<<'\n';
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
int t;
cin>>t;
while(t--){
    string c;
    cin>>c;
    vector<char>v={};
    int b=0,B=0;
    for(int i=c.size()-1;i>=0;i--){
        if(c[i]=='b')b++;
        else if(c[i]=='B')B++;
        else if(b>0 && int(c[i])>90)b--;
       else if(B>0 && int(c[i])<=90)B--;
       else v.push_back(c[i]);
    }
     for(int i=v.size()-1;i>=0;i--)
         cout<<v[i];
        cout<<'\n';
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
if(t%2==0)
{
    cout<<t/2<<endl;
    for(int i=1;i<=t/2;i++)
        cout<<2<<" ";
}
else {
    cout<<t/2<<endl;
for(int i=1;i<t/2;i++)
    cout<<2<<" ";

    cout<<3<<endl;
}

return 0;
}

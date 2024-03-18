#include <stdio.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
  while(c%b && c>0)c-=a;
  if(c>=0)
 cout<<"Yes"<<'\n';
 else cout<<"No"<<'\n';
    return 0;
}
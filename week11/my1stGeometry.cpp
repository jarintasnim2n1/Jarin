#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        char s[5];
        cin >> s; 
        int x=1, y=1;
        if(s[0] == '1') x = x+10;
        if(s[1] == '1') x = x+10;
        if(s[2] == '1') y = y+10;
        if(s[3] == '1') y = y+10;
        cout << x*y << endl;
    }
return 0;
}
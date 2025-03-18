#include <bits/stdc++.h>
using namespace std;


void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt","w",stderr);
#endif
}



void solve(){
    string s;
    cin>>s;
    // CAPS
    // cAPS
    bool flag = true;
    for(int i =1;i<s.size();i++){
        if(islower(s[i])){
            flag = false;
        }
    }
    if(flag){
        for(int i =0;i<s.size();i++){
            if(isupper(s[i])){
                cout << char(tolower(s[i]));
            }
            else{
                cout << char(toupper(s[i]));
            }
        }
    }
    else{
        cout << s << '\n';
    }
}
signed main() {
    fileIO();
    solve();
    return 0;
}


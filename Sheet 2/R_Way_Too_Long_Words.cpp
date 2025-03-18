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
    string s;cin>>s;
    if(s.size() > 10){
        cout << s[0] << s.size()-2 << s[s.size()-1] << '\n';
    }
    else{
        cout << s << '\n';
    }
}
signed main() {
    fileIO();
    int t;cin>>t;
    while (t--)
    solve();
    return 0;
}


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
    int sum = 0;
    for(int i =0;i<s.size();i++){
        sum += s[i] - '0';

    }
    if(sum%3 == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}
signed main() {
    fileIO();
    solve();
    return 0;
}


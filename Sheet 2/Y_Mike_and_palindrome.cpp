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
    int l=0,r=s.size()-1;
    int diff = 0;
    while (l <= r){
        if(s[l] != s[r]){
            diff++;
        }
        l++;
        r--;
    }
    // aba
    if(s.size()%2 == 1 && diff < 1)diff++;
    if(diff == 1){
        cout<<"YES\n";
    }
    else{
        cout << "NO\n";
    }
    // abbba
}
signed main() {
    fileIO();
    solve();
    return 0;
}


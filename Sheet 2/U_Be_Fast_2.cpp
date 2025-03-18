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
    int l,r,n;cin>>l>>r>>n;
    int a = r/n - (l-1)/n;
    cout << (r-l+1) - a << '\n';
}
signed main() {
    fileIO();
    solve();
    return 0;
}


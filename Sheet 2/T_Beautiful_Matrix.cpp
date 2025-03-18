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
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            int t;cin>>t;
            if(t == 1){
                int ans = abs(i - 2) + abs(j - 2);
                cout << ans << '\n';
                return;
            }
        }
    }
}
signed main() {
    fileIO();
    solve();
    return 0;
}


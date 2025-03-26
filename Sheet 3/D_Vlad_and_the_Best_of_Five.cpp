#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;

    int cntA = 0, cntB = 0;

    for(char c : s){
        if (c == 'A') cntA++;
        else cntB++;
    }

    cout << (cntA > cntB ? 'A' : 'B') << '\n';
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
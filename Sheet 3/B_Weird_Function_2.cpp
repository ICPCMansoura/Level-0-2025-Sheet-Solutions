#include <bits/stdc++.h>

using namespace std;

string f(int a, string s1, string s2) {
    return a == 1 ? s1 + s2 : s2 + s1;
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << f(1, f(1, f(0, s1, s2) + s1, s2), s1 + f(0, s1 + s2, f(1, s2, s1)));
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
    //    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
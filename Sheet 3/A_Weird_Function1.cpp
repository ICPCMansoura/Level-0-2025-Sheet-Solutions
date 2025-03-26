#include <bits/stdc++.h>

using namespace std;

int f(int x) {
    return 2 * x + 3;
}

void solve() {
    int x;
    cin >> x;

    cout << f(f(f(x))) + 2 * f(x * f(x));
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
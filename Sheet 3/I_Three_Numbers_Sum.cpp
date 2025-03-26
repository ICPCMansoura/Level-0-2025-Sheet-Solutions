#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int k, s;
    cin >> k >> s;

    int cnt = 0;

    for (int x = 0; x <= k; ++x) {
        for (int y = 0; y <= k; ++y) {
            // z = s - x - y

            int z = s - x - y;

            if (z >= 0 && z <= k) cnt++;

        }
    }

    cout << cnt;
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
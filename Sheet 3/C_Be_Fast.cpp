#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, sum = 0;
    cin >> n;
    for (long long i = 1; i <= n; ++i) {
        sum += i * i;
    }
    cout << sum;
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
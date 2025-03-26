#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    bool flag = false;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]){
            flag = true;
            break;
        }
    }

    cout << (flag ? "No" : "YES") << '\n';
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
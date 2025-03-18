#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        --l, --r;

        int cnt = 0;
        for (int i = l; i <= r; ++i) {
            if (arr[i] == x) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

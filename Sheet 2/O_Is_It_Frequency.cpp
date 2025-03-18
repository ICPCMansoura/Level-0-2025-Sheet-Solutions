#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int freq[m + 1] = {0};
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; ++i) {
        cout << freq[i] << '\n';
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

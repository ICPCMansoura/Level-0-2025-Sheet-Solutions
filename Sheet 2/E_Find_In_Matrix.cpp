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

    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int x;
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == x) {
                found = true;
                break;
            }
        }
    }
    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
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

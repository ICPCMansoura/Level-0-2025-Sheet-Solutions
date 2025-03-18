#include <bits/stdc++.h>
using namespace std;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                sum1 += matrix[i][j];
            }

            if (i + j == n - 1) {
                sum2 += matrix[i][j];
            }
        }
    }

    cout << abs(sum1 - sum2);
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

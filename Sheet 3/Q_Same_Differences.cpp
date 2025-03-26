#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = (int)(2e5 + 5);
int freq[2 * N] = {0}; //Double size to handle negative values

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long res = 0;

        memset(freq, 0, sizeof(freq));

        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            int shifted_value = a - i + N; // Shift the index to always be positive
            res += freq[shifted_value];
            freq[shifted_value]++;
        }

        cout << res << endl;
    }
}

int main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
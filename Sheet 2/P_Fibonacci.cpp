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

    int fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n];
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

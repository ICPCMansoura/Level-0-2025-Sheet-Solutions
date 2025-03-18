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

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; ++i) {
        if ((s1[i] == 'G' || s1[i] == 'B') != (s2[i] == 'B' || s2[i] == 'G')) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

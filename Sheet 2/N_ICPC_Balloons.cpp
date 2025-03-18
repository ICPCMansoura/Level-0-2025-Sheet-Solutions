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

    string s;
    cin >> s;

    int freq[26] = {0};
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        freq[s[i] - 'A']++;
        if (freq[s[i] - 'A'] == 1) {
            cnt += 2;
        } else {
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

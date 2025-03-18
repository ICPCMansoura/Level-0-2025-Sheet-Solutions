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
    for (int i = 0; i < n; ++i) {
        char c = tolower(s[i]);
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (freq[i] == 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

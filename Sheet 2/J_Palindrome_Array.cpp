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

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    bool is_plindrom = true;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            is_plindrom = false;
            break;
        }
    }
    if (is_plindrom)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

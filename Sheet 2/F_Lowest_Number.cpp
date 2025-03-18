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

    int min_elem = arr[0];
    int min_idx = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min_elem) {
            min_elem = arr[i];
            min_idx = i;
        }
    }
    cout << min_elem << ' ' << min_idx + 1;
    // cout << *min_element(arr, arr + n) << ' ' << min_element(arr, arr + n) - arr + 1;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

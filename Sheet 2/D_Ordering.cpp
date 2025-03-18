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
    
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    
    cout << '\n';

    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}

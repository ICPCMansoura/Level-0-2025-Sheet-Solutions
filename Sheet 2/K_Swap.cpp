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
    
    swap(arr[min_element(arr, arr + n) - arr], arr[max_element(arr, arr + n) - arr]);
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

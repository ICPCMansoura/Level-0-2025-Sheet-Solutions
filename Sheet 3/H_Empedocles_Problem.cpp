#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    string first, element, temp;

    for (int i = 0; i < 4; ++i) {
        cin >> temp;
        first += temp;
    }

    bool flag = true;

    for (int i = 1; i < n; ++i) {
        element = "";
        for (int j = 0; j < 4; ++j) {
            cin >> temp;
            element += temp;
        }

        if (element != first) flag = false;
    }

    cout << (flag ? "Empedocles was right" : "you were right") << '\n';
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    //    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
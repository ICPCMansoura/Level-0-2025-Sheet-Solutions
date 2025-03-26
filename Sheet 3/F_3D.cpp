#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct Point {
    int x, y;
};

bool comp(Point &a, Point &b) {
    return a.y > b.y;
}


void solve() {

    int n;
    cin >> n;

    int stars[n][3];
    int x[201] = {0}, y[201] = {0}, z[201] = {0};

    for (int i = 0; i < n; ++i) {
        cin >> stars[i][0] >> stars[i][1] >> stars[i][2];
        x[stars[i][0] + 100]++;
        y[stars[i][1] + 100]++;
        z[stars[i][2] + 100]++;
    }

    for (int i = 0; i < n; ++i) {
        cout << x[stars[i][0] + 100] - 1 << " " << y[stars[i][1] + 100] - 1 << " " << z[stars[i][2] + 100] - 1 << '\n';
    }

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
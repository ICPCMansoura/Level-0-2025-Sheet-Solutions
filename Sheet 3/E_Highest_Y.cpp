#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct Point {
    int x, y;
};

bool comp(Point &a, Point &b){
    return a.y > b.y;
}

void solve() {
    int n;
    cin >> n;

    Point points[n];

    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, comp);

    for(Point p : points){
        cout << p.x << " " << p.y << '\n';
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
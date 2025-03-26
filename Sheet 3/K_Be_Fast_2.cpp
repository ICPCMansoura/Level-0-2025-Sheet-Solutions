#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

struct pr{
    int d, b;
};

bool comp(pr a, pr b){
    return a.d < b.d;
}
const int N = 1e3+5;
void solve() {
    int l, r, n; cin >> l >> r >> n;
    cout << (r-l+1) - (r/n - (l-1)/n);

}

int main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
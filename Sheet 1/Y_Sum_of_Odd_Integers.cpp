#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max({a, b, c});
        int mn = min({a, b, c});
        int mid = (a + b + c) - mx - mn;

        cout << mn << " " << mid << " " << mx << endl;
    }

    return 0;
}
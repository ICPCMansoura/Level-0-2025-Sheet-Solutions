#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){
        double a , b , c;
        cin >> a >> b >> c;

        double ans = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5); // 5.7654 -> 5.7
        cout << "MEDIA = " << fixed << setprecision(1) << ans << '\n';
    }

    return 0;
}
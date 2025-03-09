#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--){
        int n;
        cin >> n;

        int a, b, c;
        int ans = 0;

        while (n--) {
            cin >> a >> b >> c;

            if (a + b + c >= 2) {
                ans++; // ans = ans + 1
            }
        }

        cout << ans << endl;
    }

    return 0;
}
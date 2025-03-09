#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){
        int k , r;
        cin >> k >> r;

        int x = 1;

        while (!((x * k) % 10 == 0 || (x * k) % 10 == r)) {
            x++;
        }

        cout << x << endl;
    }

    return 0;
}
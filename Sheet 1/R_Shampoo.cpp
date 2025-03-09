#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){
        int v, a, b, c;
        cin >> v >> a >> b >> c;

        int sum = a + b + c;

        int rem = v % sum; // 40 -> 30

        if ( rem < a) {
            cout << "F" << endl;
        }
        else if (rem < a + b) {
            cout << "M" << endl;
        }
        else {
            cout << "T" << endl;
        }
    }

    return 0;
}
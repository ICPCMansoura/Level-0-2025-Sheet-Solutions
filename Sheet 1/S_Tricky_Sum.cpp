#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){
        int n;
        cin>>n;

        int sum = n * (n + 1) / 2;

        int ans = sum;

        // p++ : 1 2 3 4 5 6 7 8
        // p*=2: 1 2 4 8 16 32 64
        for (int p = 1 ; p <= n ; p *= 2) {
            ans -= (2 * p);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
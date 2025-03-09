#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(r1 < l2)
        cout << -1;
    else{
        cout << max(l1, l2) << ' ' << min(r1, r2);
    }
    return 0;
}

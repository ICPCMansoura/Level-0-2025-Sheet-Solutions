#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    double r;
    cin >> r;
    cout << "A=" << fixed << setprecision(4) << 3.14159 * r * r;
    return 0;
}

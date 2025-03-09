#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << (a*b - c*d);
    return 0;
}

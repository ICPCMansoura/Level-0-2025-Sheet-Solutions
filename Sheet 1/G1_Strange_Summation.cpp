#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    long long n, m;
    cin >> n >> m;
    cout << n%10 + m%10;
    return 0;
}

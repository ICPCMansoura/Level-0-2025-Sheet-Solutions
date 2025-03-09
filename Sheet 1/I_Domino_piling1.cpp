#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int n, m;
    cin >> n >> m;
    cout << (n*m)/2;
    return 0;
}

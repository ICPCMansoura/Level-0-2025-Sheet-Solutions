#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int n;
    cin >> n;
    for(int i=1; i<= 10; i++){
        // 1 2 3 .. 10
        cout << i << " x " << n << " = " << i*n << '\n';
    }
    return 0;
}

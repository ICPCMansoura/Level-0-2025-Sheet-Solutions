#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b)
        swap(a, b);
    if(b > c)
        swap(b, c);
    if(a > b)
        swap(a, b);

    if(a+b <= c)
        cout << c - (a+b) + 1;
    else
        cout << 0;
    return 0;
}

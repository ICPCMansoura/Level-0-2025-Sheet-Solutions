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
    if(a+b > b + c && a+b > a+c){
        cout << a + b;
    }
    else if(b+c > a+b && b+c > a+c){
        cout << b+c;
    }
    else
        cout << a+c;
    return 0;
}

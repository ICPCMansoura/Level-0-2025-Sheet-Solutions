#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int w;
    cin >> w;
    if(w == 2){
        cout << "NO";
        return 0;
    }
    if(w%2 == 0){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}

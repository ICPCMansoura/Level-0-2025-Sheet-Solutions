#include <bits/stdc++.h>
using namespace std;

void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

int main() {
    InOutFast();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n >= 1900)
            cout << "Division 1" << '\n';
        else if(1600 <= n && n <= 1899)
            cout << "Division 2" << '\n';
        else if(1400 <= n && n <= 1599)
            cout << "Division 3" << '\n';
        else
            cout << "Division 4" << '\n';
    }
    return 0;
}

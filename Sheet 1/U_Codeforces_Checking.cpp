#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){
        char ch;
        cin>>ch;

        string s = "codeforces";

        bool flag = false;

        for (auto c : s) {
            // c o d e f
            if (ch == c) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
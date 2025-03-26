#include <bits/stdc++.h>
using namespace std;
#define int long long
void fastIO() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
}
void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

struct pr{
    int x, y;
};

bool comp (pr a, pr b){
    return a.y < b.y;
}
const int N = 1e5 + 5;
void solve(){
    int n; cin >> n;
    pr arr[N];
    int arrx[2], arry[2];
    for(int i=0; i<n; i++){
        int x1, y1; cin >> x1 >> y1;
        int x2, y2; cin >> x2 >> y2;
        int x3, y3; cin >> x3 >> y3;
        int x4, y4; cin >> x3 >> y3;
        // x
        if(x1 == x2) arrx[0] = x1, arrx[1] = x3;
        else arrx[0] = x1, arrx[1] = x2;
        // y
        if(y1 == y2) arry[0] = y1, arry[1] = y3;
        else arry[0] = y1, arry[1] = y2;

        int area = abs(arrx[0]-arrx[1]) * abs(arry[0]-arry[1]);
        arr[i].x = i+1, arr[i].y = area;
    }

    sort(arr, arr+n, comp);
    for(int i=0; i<n; i++) cout << arr[i].x << " " << arr[i].y << endl;
}

signed main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
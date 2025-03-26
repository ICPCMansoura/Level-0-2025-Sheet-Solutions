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

bool comp(const pr a, const pr b){
    return a.x < b.x;
}

const int N = (int)(1e4 + 5);

void solve(){
    int s, n; cin >> s >> n;
    pr arr[N];
    for(int i=0; i<n; i++){
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr, arr+n, comp);
    for(int i=0; i<n; i++){
        if(s > arr[i].x){
            s += arr[i].y;
        }else{
            cout << "NO";
            return ;
        }
    }
    cout << "YES";
}

signed main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
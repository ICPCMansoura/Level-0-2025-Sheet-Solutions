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

void solve(){
    int n, m; cin >> n >> m;
    int arr[101];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr[i] = ceil(arr[i]/(double)m);
    }

    int mx=0, idx=0;
    for(int i=0; i<n; i++){
        if(mx <= arr[i]) mx = arr[i], idx = i+1;
    }
    cout << idx;

}

signed main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
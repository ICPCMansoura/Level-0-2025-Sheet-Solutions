#include <bits/stdc++.h>
using namespace std;


void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt","w",stderr);
#endif
}


int freq[101];
// 1 to 100
void solve(){
    int n;cin>>n;
    int arr[n];
    // 0 0 10 1 0 0 0
    // 0 1 2 3 4 5 6

    // 2 2 2 3
    // freq[arr[i]]++

    for(int i =0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int num;
    for(int e : arr) {
        if (freq[e] == 1) {
            num = e;
        }
    }
    int ans = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == num)ans = i;
    }
    for(int i =0;i<n;i++){
        freq[arr[i]] = 0;
    }
    cout << ans+1 << '\n';

}
signed main() {
    fileIO();
    int t;cin>>t;
    while (t--)
    solve();
    return 0;
}


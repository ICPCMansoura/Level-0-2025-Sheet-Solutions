#include <bits/stdc++.h>
using namespace std;


void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt","w",stderr);
#endif
}


void solve(){
    int number_strings,n;
    cin >> number_strings >> n;
    string arr[number_strings];
    for(int i =0;i<number_strings;i++){
        cin >> arr[i];
    }
    int ans = 1e9;
    for(int i =0;i<number_strings;i++){
        for(int j=i+1;j<number_strings;j++){
            int sum = 0;
            for(int k=0;k<n;k++){
                sum += abs(arr[i][k] - arr[j][k]);
            }
            ans = min(ans,sum);
        }
    }
    cout << ans << '\n';
}
signed main() {
    fileIO();
    int t;cin>>t;
    while (t--)
    solve();
    return 0;
}


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

const int N = (int)(1e5 + 5);

struct pr{
    int v, l;
};

bool comp (pr a, pr b){
    return ((double)a.v/a.l) > ((double)b.v/b.l);
}

void solve(){
    cout << fixed << setprecision(6);
    int n; int L; cin >> n >> L;
    pr arr[N] = {0};
    for(int i=0; i<n; i++) cin >>  arr[i].v >> arr[i].l;
    sort(arr, arr+n, comp);
    double score = 0;
    for(int i=0; i<n && L != 0; i++){
        if(L >= arr[i].l){
            L -= arr[i].l;
            score += arr[i].v;
        }else{
            score += ((double)arr[i].v/arr[i].l) * L;
            L = 0;
        }
    }
    cout << score << endl;


}

signed main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
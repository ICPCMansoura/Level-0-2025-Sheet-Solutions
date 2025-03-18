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
    int a,b;cin>>a>>b;
    int c;
    c = a + b;
    string s_a,s_b,s_c;
    s_a = to_string(a);
    s_b = to_string(b);
    s_c = to_string(c);

    // 101 102 203
    int cnt = 1;
    int new_a = 0,new_b=0,new_c=0;
    // 123
    for(int i =s_a.size()-1;i>=0;i--){
        if(s_a[i] == '0')continue;
        new_a += (s_a[i]-'0')*cnt;
        cnt *= 10;
    }
    cnt = 1;
    for(int i =s_b.size()-1;i>=0;i--){
        if(s_b[i] == '0')continue;
        new_b += (s_b[i]-'0')*cnt;
        cnt *= 10;
    }
    cnt = 1;
    for(int i =s_c.size()-1;i>=0;i--){
        if(s_c[i] == '0')continue;
        new_c += (s_c[i]-'0')*cnt;
        cnt *= 10;
    }
    if(new_a + new_b == new_c){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}
signed main() {
    fileIO();
    solve();
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fileIO() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    string s;
    cin >> s;
    int a[128];
    for (int i = 'a'; i <= 'z'; i++) {
        cin >> a[i];
    }

    // ????
    bool qs = true;
    for (char c : s) {
        if (c != '?') {
            qs = false;
            break;
        }
    }
    if (qs) {
        cout << 0 << "\n" << string(s.size(), 'a') << "\n";
        return;
    }

    if (s[0] == '?') {
        char rightChar;
        int rightIdx = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '?') {
                rightChar = s[i];
                rightIdx = i;
                break;
            }
        }
        int bestCost = INT_MAX;
        char bestCh = 'a';
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int cost = abs(a[ch] - a[rightChar]);
            if (cost < bestCost) {
                bestCost = cost;
                bestCh = ch;
            }
        }
        for (int i = 0; i < rightIdx; i++) {
            s[i] = bestCh;
        }
    }

    if (s[s.size()-1] == '?') {
        char leftChar;
        int leftIdx = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != '?') {
                leftChar = s[i];
                leftIdx = i;
                break;
            }
        }
        int bestCost = INT_MAX;
        char bestCh = 'a';
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int cost = abs(a[ch] - a[leftChar]);
            if (cost < bestCost) {
                bestCost = cost;
                bestCh = ch;
            }
        }
        for (int i = leftIdx + 1; i < s.size(); i++) {
            s[i] = bestCh;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            int start = i;
            while (i < s.size() && s[i] == '?') {
                i++;
            }
            int end = i;

            char leftChar = s[start - 1];
            char rightChar = s[end];

            int bestCost = INT_MAX;
            char bestCh = 'a';
            for (char ch = 'a'; ch <= 'z'; ch++) {
                int cost = abs(a[ch] - a[leftChar]) + abs(a[ch] - a[rightChar]);
                if (cost < bestCost) {
                    bestCost = cost;
                    bestCh = ch;
                }
            }
            for (int j = start; j < end; j++) {
                s[j] = bestCh;
            }
        }
    }

    long long totalCost = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        totalCost += abs(a[s[i]] - a[s[i + 1]]);
    }
    cout << totalCost << "\n" << s << "\n";
}

int main() {
    fastIO();
    fileIO();
    solve();
    return 0;
}
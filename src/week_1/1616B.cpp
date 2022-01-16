// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t, n;
    string str;
    for (cin >> t; t--;) {
        cin >> n;
        cin >> str;
        if (str.size() > 1 && str[0] == str[1]) {
            cout << str[0] << str[1] << "\n";
            continue;
        }
        
        cout << str[0];
        int i = 1;
        for (; i < n; i++) {
            if (str[i] <= str[i - 1]) cout << str[i];
            else break;
        }
        for (i--; i >= 0; i--) cout << str[i];
        cout << "\n";
    }
}
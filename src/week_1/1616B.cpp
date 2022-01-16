#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t, n;
    string str;
    for (cin >> t; t--;) {
        cin >> n;
        cin >> str;
        bool diff = false;
        cout << str[0];
        int i = 1;
        for (; i < n; i++) {
            diff |= (str[i] != str[i - 1]);
            if (str[i] == str[i - 1]) {
                if (diff) {
                    cout << str[i];
                    continue;
                }
                else break;
            }
            if (str[i] < str[i - 1]) cout << str[i];
            else break;
        }
        for (i--; i >= 0; i--) cout << str[i];
        cout << "\n";
    }
}
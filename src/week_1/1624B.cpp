// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    
    int t, a, b, c;
    for (cin >> t; t--;) {
        cin >> a >> b >> c;
        int d = c - b;
        if ((b - d) % a == 0 && (b - d) / a > 0) {
            cout << "YES\n";
            continue;
        }
        d = b - a;
        if ((b + d) % c == 0 && (b + d) / c > 0) {
            cout << "YES\n";
            continue;
        }
        if ((c - a) % 2 == 0) {
            d = (c - a) / 2;
            if ((a + d) % b == 0 && (a + d) / b > 0) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
}
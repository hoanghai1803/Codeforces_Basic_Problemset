// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

#define oo INT_MAX

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t, n;
    for (cin >> t; t--;) {
        int s = +oo, g = -oo;
        for (cin >> n; n--;) {
            int val;
            cin >> val;
            s = min(s, val);
            g = max(g, val);
        }
        cout << g - s << "\n";
    }
}
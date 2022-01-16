#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t, n;
    for (cin >> t; t--;) {
        cin >> n;
        vector<double> a(n);
        for (double& x: a) cin >> x;
        if (n == 1) {
            cout << 0 << "\n";
            continue;
        }
        int res = 100;
        for (int p = 0; p < n; p++) {
            for (int k = 0; k < n; k++) {
                if (k == p) continue;
                double d = (a[k] - a[p]) / (p - k);
                int cnt = 0;
                for (int i = 0; i < n; i++) {
                    if (i == p) continue;
                    cnt += (a[i] != a[p] + d * (p - i));
                }
                res = min(res, cnt);
            }
        }
        cout << res << "\n";
    }
}
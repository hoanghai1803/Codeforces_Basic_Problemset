// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

#define sqr(x) ((x)*(x))

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, r;
    cin >> n >> r;
    vector<double> x(n), y(n);
    for (double& _x: x) cin >> _x;

    for (int i = 0; i < n; i++) {
        y[i] = r;
        for (int j = 0; j < i; j++) {
            if (x[j] + r < x[i] - r || x[j] - r > x[i] + r) continue;
            y[i] = max(y[i], y[j] + sqrt(sqr(2 * r) - sqr(x[i] - x[j])));
        }
    }

    for (double _y: y) cout << fixed << setprecision(9) << _y << " ";
}
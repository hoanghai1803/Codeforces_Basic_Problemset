#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t, n;
    for (cin >> t; t--;) {
        cin >> n;
        vector<int> cnt(111);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[abs(x)]++;
        }
        int res = 0;
        if (cnt[0] >= 1) res++;
        for (int i = 1; i <= 100; i++) 
            res += (cnt[i] <= 1 ? cnt[i] : 2);
        cout << res << "\n";
    }
}
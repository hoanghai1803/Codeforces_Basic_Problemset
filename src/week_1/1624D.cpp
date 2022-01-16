// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);
    
    int t, n, k;
    string s;
    for (cin >> t; t--;) {
        cin >> n >> k;
        vector<int> color(k), cntChar(30);
        cin >> s;
        for (char ch: s) cntChar[ch - 'a']++;

        int i = 0, j = 0, cnt = 0;
        for (; i <= 'z' - 'a'; i++) {
            while (cntChar[i] > 1) {
                color[j] += 2;
                cntChar[i] -= 2;
                j = (j + 1) % k;
            }
            if (cntChar[i]) cnt++;
        }
        int len = j;
        for (; j < k && cnt; j++) {
            color[j]++, cnt--;
        }
        
        if (j < k && len >= k - j) color[k - 1]++;
        cout << color[k - 1]  << "\n";
    }
}
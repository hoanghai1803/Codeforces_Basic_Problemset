// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    string str;
    cin >> str;
    int res = 0;
    for (char ch: str) {
        if (ch >= '0' && ch <= '9') res += (ch - '0') & 1;
        else for (char v: vowel) res += (ch == v);
    }
    cout << res << "\n";
}
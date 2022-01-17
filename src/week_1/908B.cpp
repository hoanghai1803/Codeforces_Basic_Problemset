// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

#define X first
#define Y second
#define MAX_N 55

ii dir[] = {ii(-1, 0), ii(0, -1), ii(0, 1), ii(1, 0)};

int n, m;
int Free[MAX_N][MAX_N];
string s;
ii Start, End;

bool valid(int u, int v) {
    return (u && u <= n && v && v <= m);
}

bool robot() {
    int u = Start.X, v = Start.Y;
    for (char d: s) {
        u += dir[d - '0'].X;
        v += dir[d - '0'].Y;
        if (!valid(u, v) || !Free[u][v]) 
            return false;
        if (ii(u, v) == End) return true;
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> n >> m;
    for (int u = 1; u <= n; u++) 
        for (int v = 1; v <= m; v++) {
            char square;
            cin >> square;
            Free[u][v] = (square != '#');
            if (square == 'S') Start = {u, v};
            if (square == 'E') End = {u, v};
        }
    cin >> s;

    int res = 0;
    do {
        res += robot();
    } while (next_permutation(dir, dir + 4));
    cout << res << "\n";
}
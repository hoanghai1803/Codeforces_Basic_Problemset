// Author: __BruteForce__
#include <bits/stdc++.h>

using namespace std;

#define MAX_N 55

int test, n;
int assigned[MAX_N], visited[MAX_N], t = 0;
vector<int> a[MAX_N];

bool visit(int u) {
    if (visited[u] != t)
        visited[u] = t;
    else
        return false;

    for (int i = 0; i < (int)a[u].size(); i++) {
        int v = a[u][i];
        if (!assigned[v] || visit(assigned[v])) {
            assigned[v] = u;
            return true;
        }
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    
    for (cin >> test; test--;) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            a[i].clear();
            visited[i] = assigned[i] = 0;
            int val;
            cin >> val;
            while (val) {
                if (val <= n) a[i].push_back(val);
                val /= 2;
            }
        }

        int cnt = 0;
        t = 0;
        for (int i = 1; i <= n; i++) {
            t++;
            cnt += visit(i);
        }
        cout << (cnt == n ? "YES\n" : "NO\n");
    }
}
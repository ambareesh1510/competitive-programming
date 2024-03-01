#include <bits/stdc++.h>

inline void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> impt(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> impt[i];
    }
    std::vector<std::vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<std::vector<int>> children(n + 1);
    std::vector<int> size;
    std::vector<int> c_impt; // cumulative importance
    std::vector<bool> visited(n + 1);
    std::stack<int> s;
    s.push(1);
    visited[1] = true;
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        //
    }

}

int main() {
    solve();
}

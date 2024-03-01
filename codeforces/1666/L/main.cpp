#include <bits/stdc++.h>

void solve() {
    int n, m, s;
    std::cin >> n >> m >> s;
    std::vector<std::vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
    }
    std::queue<int> q;
    std::vector<bool> visited(n + 1);
    std::vector<int> pred(n + 1);
    std::vector<int> parent(n + 1);
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int other : adj[curr]) {
            if (visited[other] && other != s && parent[other] != parent[curr]) {
                std::cout << "Possible\n";
                // Print paths
                std::stack<int> p1, p2;
                p1.push(other);
                p1.push(curr);
                int p1_ptr = curr;
                while (p1_ptr != s) {
                    p1_ptr = pred[p1_ptr];
                    p1.push(p1_ptr);
                }
                p2.push(other);
                int p2_ptr = other;
                while (p2_ptr != s) {
                    p2_ptr = pred[p2_ptr];
                    p2.push(p2_ptr);
                }
                std::cout << p1.size() << "\n";
                while (!p1.empty()) {
                    std::cout << p1.top() << " ";
                    p1.pop();
                }
                std::cout << "\n";
                std::cout << p2.size() << "\n";
                while (!p2.empty()) {
                    std::cout << p2.top() << " ";
                    p2.pop();
                }
                std::cout << "\n";
                return;
            } else if (!visited[other]) {
                if (curr == s) {
                    parent[other] = other;
                } else {
                    parent[other] = parent[curr];
                }
                q.push(other);
                visited[other] = true;
                pred[other] = curr;
            }
        }
    }
    std::cout << "Impossible\n";
}

int main() {
    solve();
}

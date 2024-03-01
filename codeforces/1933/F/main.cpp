#include <bits/stdc++.h>

inline void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<bool>> a(n, std::vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp;
            std::cin >> tmp;
            a[i][j] = tmp;
        }
    }

    using T = std::tuple<int, int, int>;
    std::vector<std::vector<std::vector<bool>>> visited(n, std::vector<std::vector<bool>>(m, std::vector<bool>(n, false)));
    std::queue<T> q;
    q.push({0, 0, 0});
    visited[0][0][0] = true;
    while (!q.empty()) {
        int r, c, t;
        std::tie(r, c, t) = q.front();
        q.pop();
        if (r == n - 1 && c == m - 1) {
            std::cout << t << "\n";
            return;
        }
        if (!a[(r + t + 1) % n][c] && !a[(r + t + 2) % n][c] && !visited[(r + 1) % n][c][(t + 1) % n]) {
            // std::cout << "pushing down\n";
            q.push({(r + 1) % n, c, t + 1});
            visited[(r + 1) % n][c][(t + 1) % n] = true;
        }
        if (!a[(r + t + 1) % n][(c + 1) % m] && !visited[r][(c + 1) % m][(t + 1) % n]) {
            // std::cout << "pushing right\n";
            q.push({r, (c + 1) % m, t + 1});
            visited[r][(c + 1) % m][(t + 1) % n] = true;
        }
        if (!visited[((r - 1) % n + n) % n][c][(t + 1) % n]) {
            q.push({((r - 1) % n + n) % n, c, t + 1});
            visited[((r - 1) % n + n) % n][c][(t + 1) % n] = true;
        }
    }
    std::cout << "-1\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

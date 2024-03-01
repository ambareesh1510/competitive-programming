#include <bits/stdc++.h>

void solve() {
    long long answer = LONG_LONG_MAX;
    using T = std::tuple<int, int, long long>;
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> adj(n + 1, std::vector<int>());
    std::vector<T> el(m);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        el[i] = {u, v, w};
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(n + 1, 1000000001));
    for (const auto &[u, v, w] : el) dp[u][v] = dp[v][u] = 1;
    for (int i = 1; i <= n; i++) dp[i][i] = 0;
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = std::min({dp[i][j], dp[i][k] + dp[k][j]});
            }
        }
    }
    for (const auto &[u, v, w] : el) {
        int len = std::min({dp[1][u] + dp[v][n], dp[1][v] + dp[u][n]});
        for (int i = 1; i <= n; i++) {
            len = std::min({len, dp[1][i] + dp[i][n] + dp[i][u] + 1, dp[1][i] + dp[i][n] + dp[i][v] + 1});
        }
        answer = std::min({answer, w * (len + 1)});
    }
    std::cout << answer << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

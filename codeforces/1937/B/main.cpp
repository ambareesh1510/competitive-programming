#include <bits/stdc++.h>

inline void solve() {
    int n;
    std::cin >> n;
    std::string b1, b2;
    std::cin >> b1 >> b2;
    std::vector<std::vector<int>> a(3, std::vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        a[1][i] = b1[i - 1] - '0';
        a[2][i] = b2[i - 1] - '0';
    }
    
    std::vector<int> path;
    int num_paths = 1;
    path.push_back(a[1][1]);
    int i;
    for (i = 2; i <= n; i++) {
        if (a[1][i] == a[2][i - 1]) {
            path.push_back(a[1][i]);
            num_paths++;
        } else if (a[1][i] < a[2][i - 1]) {
            path.push_back(a[1][i]);
            num_paths = 1;
        } else {
            path.push_back(a[2][i - 1]);
            for (int j = i; j < n; j++) {
                path.push_back(a[2][j]);
            }
            break;
        }
    }
    path.push_back(a[2][n]);

    for (int p : path) {
        std::cout << p;
    }
    std::cout << "\n";

    std::cout << num_paths << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

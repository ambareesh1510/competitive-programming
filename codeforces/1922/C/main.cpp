#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> c(n + 1);
    for (int i = 1; i < n + 1; i++) {
        int a;
        std::cin >> a;
        c[i] = a;
    }
    std::vector<int> dp_f(n + 1);
    std::vector<int> dp_b(n + 1);
    dp_f[1] = 0;
    dp_f[2] = 1;
    dp_b[n] = 0;
    dp_b[n - 1] = 1;
    for (int i = 3; i <= n; i++) {
        if (c[i - 1] - c[i - 2] < c[i] - c[i - 1]) {
            dp_f[i] = dp_f[i - 1] + c[i] - c[i - 1];
        } else {
            dp_f[i] = dp_f[i - 1] + 1;
        }
    }
    for (int i = n - 2; i >= 1; i--) {
        if (c[i + 2] - c[i + 1] < c[i + 1] - c[i]) {
            dp_b[i] = dp_b[i + 1] + c[i + 1] - c[i];
        } else {
            dp_b[i] = dp_b[i + 1] + 1;
        }
    }


    int m;
    std::cin >> m;
    while (m--) {
        int x, y;
        std::cin >> x >> y;
        if (x < y) {
            std::cout << dp_f[y] - dp_f[x] << std::endl;
        } else {
            std::cout << (dp_b[x] - dp_b[y]) * -1 << std::endl;
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

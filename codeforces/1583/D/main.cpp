#include <bits/stdc++.h>

inline void solve() {
    int n;
    std::cin >> n;
    std::vector<int> ans(n + 1);
    int response;
    int min;
    for (int i = 1; i < n; i++) {
        std::cout << "? ";
        for (int j = 1; j < n; j++) {
            std::cout << i + 1 << " ";
        }
        std::cout << 1 << std::endl;
        std::cout.flush();
        std::cin >> response;
        if (response != 0) {
            ans[response] = -i;
            min = std::min({min, -i});
        }
        std::cout << "? ";
        for (int j = 1; j < n; j++) {
            std::cout << "1 ";
        }
        std::cout << i + 1 << std::endl;
        std::cout.flush();
        std::cin >> response;
        if (response != 0) {
            ans[response] = i;
        }
    }
    std::cout << "! ";
    for (int i = 1; i < ans.size(); i++) {
        std::cout << ans[i] - min + 1 << " ";
    }
    std::cout << std::endl;
    std::cout.flush();
}

int main() {
    solve();
}

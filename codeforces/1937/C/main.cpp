#include <bits/stdc++.h>

// Find maximum
// Find all indices that OR to 1111...111 (find this because MAX | i should be maximized) with the maximum
// Find minimum of these
inline void solve() {
    int n;
    std::cin >> n;

    // First iteration: find max
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        std::cout << "? " << max_index << " " << max_index << " " << i << " " << i << std::endl;
        std::string res;
        std::cin >> res;
        if (res == "<") {
            max_index = i;
        }
    }

    // Second iteration: find all indices with maximized (MAX | i)
    std::vector<int> maximized_or;
    maximized_or.push_back(0);
    // int max_or_index;
    for (int i = 1; i < n; i++) {
        std::cout << "? " << max_index << " " << maximized_or[0] << " " << max_index << " " << i << std::endl;
        std::string res;
        std::cin >> res;
        if (res == "<") {
            maximized_or.clear();
            maximized_or.push_back(i);
        } else if (res == "=") {
            maximized_or.push_back(i);
        }
    }

    int ans = maximized_or[0];
    for (int i : maximized_or) {
        std::cout << "? " << ans << " " << ans << " " << i << " " << i << std::endl;
        std::string res;
        std::cin >> res;
        if (res == ">") {
            ans = i;
        }
    }
    std::cout << "! " << max_index << " " << ans << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

#include <bits/stdc++.h>

inline void solve() {
    int n;
    std::cin >> n;
    std::cout << (int)std::pow(2, (int)std::floor(std::log2(n))) << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

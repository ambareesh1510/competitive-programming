#include <iostream>

void solve() {
    int n;
    std::string a, b, c;
    std::cin >> n >> a >> b >> c;
    for (int i = 0; i < n; i++) {
        if (a[i] != c[i] && b[i] != c[i]) {
            std::cout << "YES" << std::endl;
            return;
        }
    }
    std::cout << "NO" << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

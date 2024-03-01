#include <bits/stdc++.h>

void solve() {
    int x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
    std::cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_4 >> y_4;
    if (x_1 - x_2 == 0) {
        std::cout << (y_1 - y_2) * (y_1 - y_2);
    } else {
        std::cout << (x_1 - x_2) * (x_1 - x_2);
    }
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

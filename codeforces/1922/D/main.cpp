#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a, d;
    a.push_back(0);
    d.push_back(INT_MAX);
    int temp;
    while (n--) {
        std::cin >> temp;
        a.push_back(temp);
    }
    while (n--) {
        std::cin >> temp;
        d.push_back(temp);
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

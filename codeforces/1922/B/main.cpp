#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::map<long long, long long> m;
    int a;
    while (n--) {
        std::cin >> a;
        m[a]++;
    }
    long long total_less = 0;
    long long ans = 0;
    for (const auto &[key, value] : m) {
        total_less += value;
        ans += (value * (value - 1) * (value - 2)) / 6 + (value * (value - 1) * (total_less - value) / 2);
    }
    std::cout << ans << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}

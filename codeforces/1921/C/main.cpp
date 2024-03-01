#include <bits/stdc++.h>

void solve() {
    long long n, f, a, b;
    std::cin >> n >> f >> a >> b;
    int prev = 0, next;
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        std::cin >> next;
        if ((next - prev) * a < b) {
            total += (next - prev) * a;
        } else {
            total += b;
        }
        prev = next;
    }
    if (total >= f) std::cout << "NO";
    else std::cout << "YES";
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

#include <bits/stdc++.h>

long long solve(long long a, long long b, std::vector<long long> xs) {
    long long total = b;
    for (long long x : xs) {
        total += std::min(a - 1, x);
    }
    return total;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        long long a, b, n;
        std::cin >> a >> b >> n;
        std::vector<long long> xs(n, 0);
        for (int j = 0; j < n; j++) {
            std::cin >> xs[j];
        }
        std::cout << solve(a, b, xs) << std::endl;
    }
}

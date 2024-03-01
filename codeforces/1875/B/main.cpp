#include <bits/stdc++.h>

long long solve(std::vector<long long> as, std::vector<long long> bs, long long k) {
    if (as[0] < bs[bs.size() - 1]) {
        long long temp = as[0];
        as[0] = bs[bs.size() - 1];
        bs[bs.size() - 1] = temp;
    }

    long long total = 0;
    for (long long a : as) {
        total += a;
    }

    std::sort(as.begin(), as.end());
    std::sort(bs.begin(), bs.end());

    if (k % 2 == 0) {
        total = total - as[as.size() - 1] + bs[0];
    }

    return total;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        long long n, m, k;
        std::cin >> n >> m >> k;
        std::vector<long long> as(n, 0), bs(m, 0);
        for (int i = 0; i < n; i++) {
            std::cin >> as[i];
        }
        for (int i = 0; i < m; i++) {
            std::cin >> bs[i];
        }
        std::sort(as.begin(), as.end());
        std::sort(bs.begin(), bs.end());
        std::cout << solve(as, bs, k) << std::endl;
    }
}

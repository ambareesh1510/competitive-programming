#include <bits/stdc++.h>

long long solve(long long n, long long m) {
    long long remainder = n % m;
    if (remainder == 0.0f) return 0;
    long long red_num = remainder / std::gcd(remainder, m);
    long long red_den = m / std::gcd(remainder, m);
    if (std::log2(red_den) != floor(std::log2(red_den))) {
        return -1;
    }

    long long total = 0;

    // subtract largest power of 2
    // add (num cuts) * (num people) / (num pieces)
    while (red_num > 0) {
        long long curr_div = std::pow(2, (int) std::log2(red_num));
        long long num_pieces = red_den / curr_div;
        total += (num_pieces - 1) * m / (num_pieces);
        red_num -= curr_div;
    }

    return total;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        long long n, m;
        std::cin >> n >> m;
        std::cout << solve(n, m) << std::endl;
    }
}

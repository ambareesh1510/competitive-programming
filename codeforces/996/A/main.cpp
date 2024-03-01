#include <bits/stdc++.h>

long long solve(long long n) {
    if (n == 0) {
        return 0;
    } else if (n < 5) {
        return solve(n - 1) + 1;
    } else if (n < 10) {
        return solve(n - 5) + 1;
    } else if (n < 20) {
        return solve(n - 10) + 1;
    } else if (n < 100) {
        return solve(n - 20) + 1;
    } else {
        return solve(n - 100) + 1;
    }
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << solve(n) << std::endl;
}

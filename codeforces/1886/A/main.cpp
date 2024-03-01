#include <bits/stdc++.h>

void solve(long long n) {
    if (n <= 6 || n == 9) {
        std::cout << "NO" << std::endl;
    } else if (n % 3 == 0) {
        std::cout << "YES" << std::endl;
        std::cout << 1 << " " << 4 << " " << (n - 5) << std::endl;
    } else {
        std::cout << "YES" << std::endl;
        std::cout << 1 << " " << 2 << " " << (n - 3) << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        long long n;
        std::cin >> n;
        solve(n);
    }
}

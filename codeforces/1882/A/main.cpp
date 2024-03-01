// Codeforces 1882A
// Increasing Sequence

#include <bits/stdc++.h>

int solve(std::vector<int> a) {
    int current = 0;
    for (int e : a) {
        current++;
        if (current == e)
            current++;
    }
    return current;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        std::vector<int> a(n, 0);
        for (int j = 0; j < n; j++) {
            std::cin >> a[j];
        }
        std::cout << solve(a) << std::endl;
    }
    return 0;
}


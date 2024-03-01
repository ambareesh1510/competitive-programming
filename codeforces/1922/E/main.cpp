#include <bits/stdc++.h>

void solve() {
    long long x;
    std::cin >> x;
    std::bitset<64> bits(x);
    std::vector<int> ans;

    int len = 0;
    while (x >>= 1) {
        len++;
    }
    for (int i = 0; i < len; i++) {
        ans.push_back(i);
    }

    int ctr = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (bits[i]) {
            ans.insert(ans.end() - i, ctr);
            ctr--;
        }
    }

    std::cout << ans.size() << std::endl;
    for (int i : ans) {
        std::cout << i << " ";
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

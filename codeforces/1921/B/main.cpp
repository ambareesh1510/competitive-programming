#include <bits/stdc++.h>

void solve() {
    int l;
    std::string s, f;
    std::cin >> l >> s >> f;
    int sc = 0, fc = 0, dc = 0;
    for (int i = 0; i < l; i++) {
        if (s[i] != f[i] && (s[i] == '1' || f[i] == '1')) dc++;
        if (s[i] == '1') sc++;
        if (f[i] == '1') fc++;
    }
    std::cout << (std::abs(sc - fc) + dc) / 2 << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) solve();
}

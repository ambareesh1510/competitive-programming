#include <bits/stdc++.h>

std::string reduce(std::string s, long long *str_num) {
    bool removed = false;
    for (long long i = 0; i < s.size() - 1; i++) {
        while (*str_num > 1 && i < s.size() - 1) {
            if (s[i] > s[i + 1]) {
                s = s.erase(i, 1);
                removed = true;
                (*str_num)--;
            } else {
                break;
            }
        }
    }
    if (!removed) {
        (*str_num)--;
        s = s.erase(s.size() - 1, 1);
    }
    return s;
}

void solve(std::string s, long long pos) {
     long long s_len = s.size();
     while (pos > s_len) {
         pos -= s_len;
         s_len--;
     }
     long long str_num = s.size() - s_len + 1;
     // std::cout << "target position " << pos << std::endl;
     // std::cout << "target string " << str_num << std::endl;
     while (str_num > 1) {
         s = reduce(s, &str_num);
     }
     std::cout << s[pos - 1];
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        long long pos;
        std::cin >> pos;
        solve(s, pos);
    }
    std::cout << std::endl;
}

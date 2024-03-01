#include <bits/stdc++.h>

int solve(std::set<std::set<int>> sets, std::vector<int> lengths) {
    std::set<int> union_set;
    for (std::set s : sets) {
        for (int e : s) {
            union_set.insert(e);
        }
    }

    int min_length = lengths[0];
    for (int i : lengths) {
        if (i < min_length) {
            min_length = i;
        }
    }
    return union_set.size() - min_length;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        std::set<std::set<int>> sets;
        std::vector<int> lengths;
        for (int j = 0; j < n; j++) {
            int k;
            std::cin >> k;
            lengths.push_back(k);
            std::set<int> ks;
            for (int m = 0; m < k; m++) {
                int temp;
                std::cin >> temp;
                ks.insert(temp);
            }
            sets.insert(ks);
        }
        std::cout << "ANS: " << solve(sets, lengths) << std::endl;
    }
}

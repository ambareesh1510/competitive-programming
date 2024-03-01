#include <bits/stdc++.h>

void solve(int px, int py, int ax, int ay, int bx, int by) {
    double d_p_a = std::sqrt(std::pow(ax - px, 2) + std::pow(ay - py, 2));
    double d_p_b = std::sqrt(std::pow(bx - px, 2) + std::pow(by - py, 2));
    double d_o_a = std::sqrt(std::pow(ax, 2) + std::pow(ay, 2));
    double d_o_b = std::sqrt(std::pow(bx, 2) + std::pow(by, 2));
    double d_a_b = std::sqrt(std::pow(ax - bx, 2) + std::pow(ay - by, 2));

    if (d_p_a <= d_p_b && d_o_a <= d_o_b) {
        std::cout << std::setprecision(11) << std::max(d_p_a, d_o_a) << std::endl;
    } else if (d_p_a > d_p_b && d_o_a > d_o_b) {
        std::cout << std::setprecision(11) << std::max(d_p_b, d_o_b) << std::endl;
    } else {
        std::cout << std::setprecision(11) << std::max( {
            std::min(d_p_a, d_p_b),
            std::min(d_o_a, d_o_b),
            d_a_b / 2.0
        }
        ) << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int px, py, ax, ay, bx, by;
        std::cin >> px >> py >> ax >> ay >> bx >> by;
        solve(px, py, ax, ay, bx, by);
    }
}

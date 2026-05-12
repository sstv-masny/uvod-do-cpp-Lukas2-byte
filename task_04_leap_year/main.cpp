
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long y;
    if (!(std::cin >> y))
        return 0;
    bool leap;
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
        leap = 1;
    } else
        leap = 0;
    std::cout << (leap ? "YES" : "NO");
    return 0;
}


#include <iostream>
#include <vector>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    if (!(std::cin >> n))
        return 0;

    std::vector<int> V(101, 0);
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        if (temp >= 0 && temp <= 100) {
            V[temp]++;
        }
    }

    for (int j = 0; j < 101; j++) {
        if (V[j] > 0) {
            std::cout << j << " " << V[j] << "\n";
        }
    }
    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i < n; ++i) {
        if (i % 2 != 0) {
            std::cout << "I hate that ";
        } else {
            std::cout << "I love that ";
        }
    }

    if (n % 2 == 0) {
        std::cout << "I love it";
    } else {
        std::cout << "I hate it";
    }

    return 0;
}

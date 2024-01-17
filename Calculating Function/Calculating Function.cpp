#include <iostream>
#include <cmath>

int main() {
    long long n, f;

    std::cin >> n;

    if (n % 2 == 0) {
        f = n / 2;
    } else {
        f = ((n - 1) / 2) - n;
    }

    std::cout << f;

    return 0;
}

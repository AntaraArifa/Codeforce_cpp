#include<iostream>

int main() {

    int n, a, b, c, d, e;
    std::cin >> n;
    a = n / 100;
    b = (n % 100) / 20;
    c = ((n % 100) % 20) / 10;
    d = (((n % 100) % 20) % 10) / 5;
    e = ((((n % 100) % 20) % 10) % 5) / 1;
    std::cout << a + b + c + d + e;

    return 0;
}

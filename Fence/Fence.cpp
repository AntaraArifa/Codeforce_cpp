#include<iostream>

using namespace std;

int main() {
    long long t, a, b, c, d;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> a >> b >> c;
        d = (a + b + c) - 2;
        cout << d << endl;
    }
    return 0;
}

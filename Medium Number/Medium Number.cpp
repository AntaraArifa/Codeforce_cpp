#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int medium;
        if ((a <= b && b <= c) || (c <= b && b <= a)) {
            medium = b;
        } else if ((b <= a && a <= c) || (c <= a && a <= b)) {
            medium = a;
        } else {
            medium = c;
        }

        cout << medium << endl;
    }

    return 0;
}

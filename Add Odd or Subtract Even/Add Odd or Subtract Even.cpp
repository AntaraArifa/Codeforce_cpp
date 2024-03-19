#include <iostream>

using namespace std;

int main() {
    int a, b, t, s;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b == a) {
            cout << "0\n";
        } else if (b > a) {
            s = b - a;
            if (s % 2 == 0) {
                cout << "2\n";
            } else {
                cout << "1\n";
            }
        } else {
            s = a - b;
            if (s % 2 == 0) {
                cout << "1\n";
            } else {
                cout << "2\n";
            }
        }
    }
    return 0;
}

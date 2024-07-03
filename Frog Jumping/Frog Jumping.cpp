#include <iostream>
using namespace std;

int main() {
    int t;
    long long int a, b, k, x;
    cin >> t;
    while (t--) {
        cin >> a >> b >> k;
        if (a == b) {
            if (k % 2 == 0) {
                cout << "0\n";
            } else {
                cout << a << endl;
            }
        } else {
            if (k % 2 == 0) {
                x = (k / 2);
                cout << ((x * a) - (x * b)) << endl;
            } else {
                x = (k / 2);
                cout << (((x + 1) * a) - (x * b)) << endl;
            }
        }
    }
    return 0;
}

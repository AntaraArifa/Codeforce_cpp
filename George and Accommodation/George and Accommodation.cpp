#include <iostream>
using namespace std;

int main() {
    int n, p, q, o = 0;
    cin >> n;

    while (n--) {
        cin >> p >> q;
        if (q - p >= 2) {
            o++;
        }
    }

    cout << o << endl;

    return 0;
}

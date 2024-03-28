#include <iostream>
using namespace std;

int main() {
    long long t, n, h1, h2, h3;
    cin >> t;

    while (t--) {
        cin >> n;

        if (n % 3 != 0) {
            h1 = (n / 3) + 1;
            h2 = (n / 3) + 2;
            h3 = n - (h1 + h2);
        } else {
            h1 = n / 3;
            h2 = h1 + 1;
            h3 = n - (h1 + h2);
        }

        if (h1 == h3) {
            h1++;
            h3++;
        }

        if (h1 == 0 || h3 == 0) {
            h1--;
            h3++;
        }

        cout << h1 << " " << h2 << " " << h3 << endl;
    }

    return 0;
}

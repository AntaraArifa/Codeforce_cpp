#include <iostream>
using namespace std;

int main() {
    int n, a[1000], i, x, p = 0;
    cin >> n;


    for (i = 0; i < n; i++) {
        cin >> a[i];
    }


    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }


    for (i = 0; i < n; i++) {
        if (a[i] < max) {
            x = (max - a[i]);
            p = p + x;
        }
    }


    cout << p << endl;

    return 0;
}

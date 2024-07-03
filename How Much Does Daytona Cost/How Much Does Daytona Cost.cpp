#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        bool found = false;
        int a[1000];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) {
                found = true;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

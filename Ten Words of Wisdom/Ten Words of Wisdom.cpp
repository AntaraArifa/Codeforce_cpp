#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }

        int m = -1, w = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] <= 10 && b[i] > m) {
                m = b[i];
                w = i + 1;
            }
        }

        cout << w << endl;
    }

    return 0;
}

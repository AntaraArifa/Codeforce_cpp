#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m = 0, c = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                c++;
            } else {
                m = max(m, c);
                c = 0;
            }
        }

        m = max(m, c);

        cout << m << endl;
    }

    return 0;
}

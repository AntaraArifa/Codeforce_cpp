#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    if (m >= k) {
        if (k >= n) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if (k > m) {
        if (m >= n) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
    return 0;
}

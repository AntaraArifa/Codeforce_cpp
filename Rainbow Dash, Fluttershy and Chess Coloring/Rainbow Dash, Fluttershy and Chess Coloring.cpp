#include <iostream>
using namespace std;

int main() {
    int T, n, r;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> n;
        r = (n / 2) + 1;
        cout << r << endl;
    }
    return 0;
}

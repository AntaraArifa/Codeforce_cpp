#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        int a = 0, b = 0;
        cin >> s;

        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') {
                a++;
            } else {
                b++;
            }
        }

        if (a > b) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}

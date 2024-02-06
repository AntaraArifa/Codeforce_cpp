#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstBlackIndex = -1;
        int lastBlackIndex = -1;


        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if (firstBlackIndex == -1) {
                    firstBlackIndex = i;
                }
                lastBlackIndex = i;
            }
        }


        if (firstBlackIndex != -1) {
            cout << lastBlackIndex - firstBlackIndex + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}

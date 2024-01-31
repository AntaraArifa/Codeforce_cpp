#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        string s;
        cin >> s;

        int p = 0;

        for (int i = 0; i < 10; i++) {
            if (s[i] != "codeforces"[i]) {
                p++;
            }
        }

        cout << p << endl;
    }

    return 0;
}

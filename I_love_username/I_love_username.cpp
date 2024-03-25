#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int m = num[0], l = num[0];
    int a = 0;

    for (int i = 1; i < n; i++) {
        if (num[i] > m) {
            m = num[i];
            a++;
        } else if (num[i] < l) {
            l = num[i];
            a++;
        }
    }

    cout << a << endl;

    return 0;
}


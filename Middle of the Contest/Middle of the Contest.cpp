#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1 >> h2 >> colon >> m2;

    int total_minutes = (h2 - h1) * 60 + (m2 - m1);
    int midpoint_minutes = total_minutes / 2;

    int h3 = h1 + midpoint_minutes / 60;
    int m3 = m1 + midpoint_minutes % 60;

    if (m3 >= 60) {
        h3++;
        m3 -= 60;
    }

    cout << (h3 < 10 ? "0" : "") << h3 << ":" << (m3 < 10 ? "0" : "") << m3;

    return 0;
}

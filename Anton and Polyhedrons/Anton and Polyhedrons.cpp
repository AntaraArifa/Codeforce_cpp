#include<iostream>
using namespace std;

int main()
{
    int i, n, o = 0;
    string s;
    cin >> n;

    for (i = 0; i < n; i++) {

        cin >> s;

        if (s == "Tetrahedron") {
            o = o + 4;
        }
        if (s == "Cube") {
            o = o + 6;
        }
        if (s == "Octahedron") {
            o = o + 8;
        }
        if (s == "Dodecahedron") {
            o = o + 12;
        }
        if (s == "Icosahedron") {
            o = o + 20;
        }
    }

    cout << o << endl;

    return 0;
}

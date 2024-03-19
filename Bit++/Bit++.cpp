#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i, n,o=0;
    string s;

    cin >> n;

    for (i = 0; i < n; i++) {

        cin >> s;

        if(s == "++X" || s == "X++" )
        {
            o=o+1;
        }
        if(s == "--X" || s == "X--")
        {
            o=o-1;
        }
    }

    cout << o << endl;

    return 0;
}

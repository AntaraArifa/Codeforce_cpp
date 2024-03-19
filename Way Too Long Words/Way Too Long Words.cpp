#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i, n;
    string s;

    cin >> n;

    for (i = 0; i < n; i++) {

        cin >> s;

        if(s.length() > 10)
        {
            cout << s[0] << s.length()-2 << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}


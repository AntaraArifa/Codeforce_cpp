#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    string x;

    cin >> t;
    t = t*3;

    while(t--)
    {
        cin >> x;

        sort(x.begin(),x.end());
        if(x[0]== '?')
        {
            if(x[1] == 'B' && x[2] == 'C')
            {
                cout << "A" << endl;
            }
            else if(x[1] == 'A' && x[2] == 'B')
            {
                cout << "C" << endl;
            }
            else if(x[1] == 'A' && x[2] == 'C')
            {
                cout << "B" << endl;
            }

        }

    }
}

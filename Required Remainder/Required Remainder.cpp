#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, n, k = 0;
        cin >> a >> b >> n;

        int c = n / a;
        k = (a * c) + b;

        if(k > n)
        {
            k -= a;
        }

        cout << k << endl;
    }

    return 0;
}

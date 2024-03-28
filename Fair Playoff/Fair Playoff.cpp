#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        int s1,s2,s3,s4,a,b;

        cin >> s1 >> s2 >> s3 >> s4;

        a = max(s1,s2);
        b = max(s3,s4);

        if((a < s3 && a < s4) || (b < s1 && b < s2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

    }

    return 0;
}


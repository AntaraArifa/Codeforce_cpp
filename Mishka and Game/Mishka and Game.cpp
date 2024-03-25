#include<iostream>

using namespace std;

int main()
{
    int n,i,mo=0,co=0,m,c;
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> m >> c;
        if(m>c)
        {
            mo = mo+1;
        }
        else
        {
            co = co+1;
        }
    }
    if(mo>co)
    {
        cout << "Mishka" << endl;
    }
    else if(co>mo)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}

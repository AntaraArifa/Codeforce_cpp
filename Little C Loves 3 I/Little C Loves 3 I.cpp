#include<iostream>
using namespace std;

int main()
{
    int n,o;

    cin>>n;

    if(n%3==0)
    {
        o=n-2;
        cout<<1<<" "<<1<<" "<<o<<endl;
    }

    else
    {
        o=n-3;
        cout<<1<<" "<<2<<" "<<o<<endl;
    }


    return 0;
}

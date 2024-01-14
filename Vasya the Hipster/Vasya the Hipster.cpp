#include<iostream>
using namespace std;

int main()
{
    int a,b,c,x;

    cin>>a>>b;

    if(a>b)
    {
        c=b;
        x=(a-b)/2;
        cout<<c<<" "<<x<<endl;
    }
    else
    {
        c=a;
        x=(b-a)/2;
        cout<<c<<" "<<x<<endl;
    }


    return 0;
}

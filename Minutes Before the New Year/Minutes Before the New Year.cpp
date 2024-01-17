#include<iostream>
using namespace std;

int main()
{
    int t,i,h,m,o;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>h>>m;
        h=(23-h)*60;
        m=60-m;
        o=h+m;
        cout<<o<<endl;

    }

    return 0;
}

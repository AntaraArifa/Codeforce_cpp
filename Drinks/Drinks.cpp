#include<iostream>
using namespace std;

int main()
{
    int i,n,p;
    double c=0,o;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p;

        c=c+p;
    }

    o=c/n;
    cout<<o<<endl;

    return 0;
}

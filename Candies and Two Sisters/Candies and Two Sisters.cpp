#include<iostream>
using namespace std;

int main()
{
    int i,t,n,o;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;

        if(n%2==0)
        {
            o=(n-1)/2;
        }
        else
        {
            o=n/2;
        }

        cout<<o<<endl;
    }



    return 0;
}

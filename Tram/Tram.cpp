#include<iostream>
using namespace std;

int main()
{
    int i,n,a,b,c=0,m=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        c=b-a+c;

        if(m<c)
            m=c;;
    }

    cout<<m<<endl;


    return 0;
}

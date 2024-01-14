#include<iostream>
using namespace std;

int main()
{
    int i,a,b,y=0;

    cin>>a>>b;

    for(i=0;;i++)
    {
        a=a*3;
        b=b*2;
        y=y+1;

        if(a>b)
        {
            break;
        }
    }
    cout<<y<<endl;

    return 0;
}

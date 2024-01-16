#include<iostream>
using namespace std;

int main()
{
    int i,n,k,c=0,x,y=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        x=240-k;
        c=c+(5*i);
        if(c>x)
        {
            break;
        }
        y++;
    }

    cout<<y<<endl;

    return 0;
}

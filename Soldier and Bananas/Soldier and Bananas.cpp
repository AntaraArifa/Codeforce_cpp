#include<iostream>
using namespace std;

int main()
{
    int i,k,n,w,c=0,x;

    cin>>k>>n>>w;

    for(i=1;i<=w;i++)
    {
        c=c+(i*k);
    }
    x=c-n;

    if(x>0)
    {
        cout<<x<<endl;
    }
    else
        cout<<0<<endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int i,n,a,b,c,x=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
        {
            x=x+1;
        }
    }

    cout<<x<<endl;

    return 0;
}

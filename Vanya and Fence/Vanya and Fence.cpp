#include<iostream>
using namespace std;

int main()
{
    int i,n,h,y,x=0;

    cin>>n>>h;

    for(i=0;i<n;i++)
    {
       cin>>y;

       if(y>h)
       {
           x=x+2;
       }
       else
       {
           x=x+1;
       }

    }
    cout<<x<<endl;

    return 0;
}

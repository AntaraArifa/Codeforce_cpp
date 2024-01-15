#include<iostream>
using namespace std;

int main()
{
    int i,x,y,a,b,c,d;

    cin>>y;

    for(i=0; ;i++)
    {
        y++;

        a= y/1000;
        b= (y-(a*1000))/100;
        c= (y-(a*1000)-(b*100))/10;
        d= (y-(a*1000)-(b*100)-(c*10))/1;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            x=y;
            break;
        }
    }

    cout<<x<<endl;


    return 0;
}

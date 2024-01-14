#include<iostream>
using namespace std;

int main()
{
    int x,o;

    cin>>x;

    if(x%5==0)
    {
        o= x/5;
        cout<<o<<endl;
    }
    else
    {
        o= (x/5)+1;
        cout<<o<<endl;
    }

   return 0;
}

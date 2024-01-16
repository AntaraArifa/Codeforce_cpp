#include<iostream>
using namespace std;

int main()
{
    int i,t,a,b,o,c;

    cin>>t;

    for(i=1;i<=t;i++)
    {
      cin>>a>>b;

      if(a%b!=0)
      {
          c=a%b;
          o=b-c;
          cout<<o<<endl;
      }
      else
      {
           cout<<0<<endl;
      }

    }

    return 0;
}

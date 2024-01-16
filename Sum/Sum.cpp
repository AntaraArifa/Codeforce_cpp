#include<iostream>
using namespace std;

int main()
{
    int i,t,a,b,c,o;

    cin>>t;

    for(i=0;i<t;i++)
    {
      cin>>a>>b>>c;

      if((a+b ==c)|| (a+c ==b)|| (b+c ==a))
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }

    return 0;
}


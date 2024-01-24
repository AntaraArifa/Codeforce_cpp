#include<iostream>

using namespace std;

int main()
{
   int t,a,b,c;

   cin>>t;

   for(int i=0;i<t;i++)
   {
      cin>>a>>b>>c;

      if(a==b && a!=c)
      {
         cout<<c<<endl;
      }
      else if(a==c && a!=b)
      {
         cout<<b<<endl;
      }
      else if(b==c && b!=a)
      {
         cout<<a<<endl;
      }

   }

}



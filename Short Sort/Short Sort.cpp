#include<iostream>

using namespace std;

int main()
{
   int t;
   char x,y,z;

   cin>>t;

   for(int i=0;i<t;i++)
   {
      cin>>x>>y>>z;

      if(x=='a' && y=='b' && z=='c')
      {
         cout<<"YES"<<endl;
      }
      else if(x=='a' && y=='c' && z=='b')
      {
         cout<<"YES"<<endl;
      }
      else if(x=='c' && y=='b' && z=='a')
      {
         cout<<"YES"<<endl;
      }
      else if(x=='b' && y=='a' && z=='c')
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }

   }

}



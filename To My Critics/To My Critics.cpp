#include<iostream>

using namespace std;

int main()
{
   int t,a,b,c;

   cin>>t;

   for(int i=0;i<t;i++)
   {
      cin>>a>>b>>c;

      if(a+b==10 || a+b>10 || c+b==10 || c+b>10 || a+c==10 || a+c>10)
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }

   }

}



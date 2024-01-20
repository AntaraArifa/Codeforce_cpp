#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int t,i,a,b,c,n,x,y,z,w;

   cin>>t;

   for(i=0; i<t; i++)
   {
       cin>>a>>b>>c>>n;
       w = max({a,b,c});
       x=w-a;
       y=w-b;
       z=w-c;

       if((n-x-y-z)%3 == 0 && (n-x-y-z)/3 >= 0 )
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }

}



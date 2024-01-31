#include<iostream>

using namespace std;

int main()
{
   int n,a,b;

   cin>>n;

   if(n%2 == 0)
      {
         a=4;
         b=n-4;
      }
    else
      {
         a=9;
         b=n-9;
      }

    cout<<a<<" "<<b<<endl;

}



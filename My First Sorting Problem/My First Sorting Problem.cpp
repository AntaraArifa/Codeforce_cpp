#include<iostream>
 using namespace std;

 int main()
 {
     int t,x,y;

     cin >> t ;

     for(int i=0; i<t; i++)
     {
         cin >> x >> y;

         if(x>y)
         {
             cout << y << " " << x << endl;
         }
         else
         {
             cout << x << " " << y << endl;
         }
     }

     return 0;

 }

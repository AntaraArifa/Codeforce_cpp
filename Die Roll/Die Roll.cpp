#include<iostream>

using namespace std;

int main()
{
   int Y,W,M;

   cin>>Y>>W;
   M = max(Y,W);
   if(M==1)
   {
       cout<<"1/1"<<endl;
   }
   else if(M==2)
   {
       cout<<"5/6"<<endl;
   }
   else if(M==3)
   {
       cout<<"2/3"<<endl;
   }
   else if(M==4)
   {
       cout<<"1/2"<<endl;
   }
   else if(M==5)
   {
       cout<<"1/3"<<endl;
   }
   else if(M==6)
   {
       cout<<"1/6"<<endl;
   }

}



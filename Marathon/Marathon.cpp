#include<iostream>
#include <vector>

using namespace std;

int main()
{
    int n,a,b[3],f;
    cin>>n;
    while(n--)
        {
         f=0;
         cin>>a;
         for(int i=0;i<3;i++)
         {
            cin>>b[i];
            if(b[i]>a)
            {
                f++;
            }
         }
         cout<<f<<endl;
        }
}




#include<iostream>

using namespace std;

int main()
{
   long int arr[1000];
   int c=0;

   for(int i=0;i<4;i++){
      cin>>arr[i];
   }
   for(int i=0;i<4;i++){
    if(arr[i]==arr[i+1] || arr[i]==arr[i+2] || arr[i]==arr[i+3]){
      c++;
      }
   }
   cout<<c<<endl;
}

#include<iostream>
using namespace std;

int main(){
  int x1,x2,x3,m,s;
  cin>>x1>>x2>>x3;

  if(x1>x2 && x1<x3){
    m=x1;
  }
  else if(x1<x2 && x1>x3){
    m=x1;
  }
  else if(x2>x1 && x2<x3){
    m=x2;
  }
  else if(x2<x1 && x2>x3){
    m=x2;
  }
  else if(x3>x1 && x3<x2){
    m=x3;
  }
  else if(x3<x1 && x3>x2){
    m=x3;
  }
  s=abs(m-x1)+abs(m-x2)+abs(m-x3);

  cout<<s<<endl;
}

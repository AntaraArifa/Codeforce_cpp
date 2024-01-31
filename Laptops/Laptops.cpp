#include<iostream>
using namespace std;
int main(){
    int n,a,b,c=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a!=b){
            c++;
        }
    }
    if(c>0){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
}

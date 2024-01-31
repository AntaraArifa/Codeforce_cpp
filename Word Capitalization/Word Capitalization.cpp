#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[0]>='A' && s[0]<='Z'){
            cout<<s<<endl;
            break;
        }
        else{
            s[0]=s[0]-'a'+65;
            cout<<s<<endl;
            break;
        }
    }

}


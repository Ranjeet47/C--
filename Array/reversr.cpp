#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"give your name: ";
    cin>>name;
    string rev = " ";
    int t = name.length();
    rev.resize(t);
    for(int i=0;i<t;i++){
        rev[i]= name[t-1-i];
    }

    if(name==rev){
        cout<< "you are name is palindrome";
    }else{
        cout<<"you are name is not  palindrome";
    }
}
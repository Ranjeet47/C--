#include <bits/stdc++.h>
using namespace std;

signed main(){

char ch ;
cin>>ch;

if(ch>=65 && ch<=90){
    cout<<"the given character is a uppercase"<<endl;
    
}
else if(ch>=97 && ch<=122){
    cout<<"the given character is a lowercase"<<endl;
    
}
else if(ch>=48 && ch<=57){
    cout<<"the given character is a numaric"<<endl;
    
}
else{
    cout<<"invalid key"<<endl;
}


}
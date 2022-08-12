#include<iostream>
using namespace std;
int main (){
    for(int i=1;i<=3;i++){
      for(int j=1;j<=7;j++){
        if((i+j)==2*i+2 || (i+j)==4 ||(i+j)==2*i+6 || (i+j)==8){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
}
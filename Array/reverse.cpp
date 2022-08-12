#include <iostream>
using namespace std;
int main(){
     int n,r,reverse = 0;
     cout<<"give the input n ";
     cin>>n;
     while(n>0){
     r= n%10;
     n = n/10;
     reverse = reverse*10 + r;

    cout<<reverse<<endl;
     }
     
    return 0;
}
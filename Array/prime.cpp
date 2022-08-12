#include <iostream>
using namespace std;
int main(){
     int n,count =0;
     cout<<"give the input n ";
     cin>>n;
     for(int i=1;i<=n;i++)
     if(n%i==0){
         count++;
     }
     if(count==2)cout<<"the number is a prime number "<<endl;
     else{
       cout<<"the number is not a prime number "<<endl;   
     }
     
     
     
     
    return 0;
}
#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"give the input n ";
     cin>>n;
     int p = 1;
     for(int i=1;i<=n;i++)
     {
         
         p= p*i;
     }
         cout<<p<<endl;
        
     
    return 0;
}
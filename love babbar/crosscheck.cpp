#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,sum = 0,i=0;
    cin>>a;
    while(i<=a){
        if(i%2 ==0){
            sum = sum +i;
            i= i+1;
        }else{
        i=i+1;
        }
    }
    cout<<"sum is equal to "<<sum<<endl;
}
#include<bits/stdc++.h>
using namespace std;
bool isPrime = 1;
signed main(){
    int n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0)
        isPrime = 0;
        break;
    }
    if(isPrime ==0){
        cout<<"given number is not a prime number"<<endl;
    }
    else{
        cout<<"given number is a prime number"<<endl;
    }
}
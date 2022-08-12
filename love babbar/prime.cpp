#include <bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"n is not a prime number"<<endl;
        }
        else
        cout<<"n is a prime number";
    }
}
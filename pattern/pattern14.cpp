#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
      

        //star print kr  lo
        int j=1;
        int star = n-i+1;
        while (star){
            cout<<"*";
            star -=1;

        }cout<<endl;
        i +=1;
    }
}
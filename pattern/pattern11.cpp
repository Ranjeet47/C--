#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
        char value = 'A' +i+j-2;
        
            cout<<value<<" ";
            value +=1;
            j +=1;
        }cout<<endl;
        i +=1;
    }
}
#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        //space print kr lo
        int space = n-i;
        while(space){
            cout<<" ";
            space -=1;
        }

        //star print kr  lo
        int j=1;
        while (j<=i){
            cout<<"*";
            j +=1;

        }cout<<endl;
        i +=1;
    }
}
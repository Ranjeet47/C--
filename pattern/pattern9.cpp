#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
       
        while(j<=n){
             char ch = 'A'+j-1;
            cout<<ch<<" ";
            j +=1;
        }cout<<endl;
        i +=1;
    }
}
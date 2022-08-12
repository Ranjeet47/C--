#include <bits/stdc++.h>
using namespace std;

signed main(){
    int i=1,n;

    cin>>n;
    int count =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;

    }
}
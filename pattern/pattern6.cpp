#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1,value= i;
        while(j<=i){
            cout<<value<<" ";
            value +=1;
            j +=1;
        }
        cout<<endl;
        i +=1;

    }
}
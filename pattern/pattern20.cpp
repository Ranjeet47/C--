#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        //space print kr lo(first tringle)
        int space =n-i;
        while(space){
            cout<<" ";
            space -=1;
        }

        //star print kr  lo(2nd tringle)
        //int star =i;
        int j= 1;
        while (j<=i){
            cout<<j;
            j +=1;

        }
        //third tringle
        int kt =i-1;
        while(kt){
            cout<<kt;
            kt -=1;
        }
        
        cout<<endl;
        i +=1;

    }
}
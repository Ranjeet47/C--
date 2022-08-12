#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        //(first tringle)
        int j=1,start =n-i+1;
        while(start){
            cout<<j;
            j +=1;
            start -=1;
        }

        //(2nd tringle)
        int dpp = i-1;
        while (dpp){
            cout<<"*";
            dpp -=1;

        }
        //2nd ka 2nd part
        int nit = i-1;
        while(nit){
            cout<<"*";
            nit -=1;
        }

        //third tringle
        int end =n-i+1;
        while(end){
            cout<<end;
            end -=1;
        }
        
        cout<<endl;
        i +=1;

    }
}
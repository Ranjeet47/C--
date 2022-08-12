#include  <bits/stdc++.h>
using namespace std;

int main() {
    int  n,i=1;
    cin>>n;

    while(i<=n){
    //1st part 
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }

    //2nd part 
    int p = i-1;
    while(p){
        cout<<"*";
        p--;
    }
      int q = i-1;
    while(q){
        cout<<"*";
        q--;
    }

    int t = n-i+1;
    while(t){
        cout<<t;
        t--;
    }
    cout<<endl;
    i++;

    }
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int m, int f, int r){
    if(m == -1 || f == -1){
        cout<<'F'<<endl;
        return;
    }
    int s = m + f;
    if (s >= 80){
        cout<<'A'<<endl;
        return;
    }
    else if(s >= 65){
        cout<<'B'<<endl;
        return;
    }
    else if(s >= 50){
        cout<<"C"<<endl;
        return;
    }
    else if(s >= 30){
        if(r >= 50)
            cout<<"C"<<endl;
        else
            cout<<'D'<<endl;
        return;
    }
    else
        cout<<'F'<<endl;
    return;
}
int main(){
   int T,M,F,R;
    cin>>T;
    while(T--){
        cin>>M>>F>>R;
        solve(M,F,R);
    }
    return 0;
}
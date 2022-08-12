#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x,y;
    cin>>x>>y;

    if(x==0 && y==0){
    cout<<"it is origin"<<endl;
    }
    else if(x==0){
    cout<<"x axis"<<endl;
    }
    else if(y==0){
    cout<<"y axis"<<endl;
    }
    else if(x>0){
        if(y>0)
        cout<<"1 quadrant"<<endl;
        else
        cout<<"4 quadrant"<<endl;
    }
    else if(x<0){
        if(y>0)
        cout<<"2 quadrant"<<endl;
        else
        cout<<"3 quadrant"<<endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--);
    solve();
}
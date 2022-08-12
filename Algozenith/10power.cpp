#include <bits/stdc++.h>
using namespace std;
using ld = long double; 
void solve(){

ld a,b,c,d;
cin>>a>>b>>c>>d;
if(b*log(a)>d*log(c)){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
}
//in below case time limit can exceed so we use log for comparison
/*if(pow(a,b)>pow(c,d)){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
}*/
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--);
    solve();
}
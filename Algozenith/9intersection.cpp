#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int l1,r1,l2,r2,c,d;
    cin>>l1>>r1>>l2>>r2;
    c = max(l1,l2);
    d = min(r1,r2);
    if(c>d){
        cout<<-1<<endl;
    }else{
        cout<<"the interval is equal to "<<c<<" to "<<d<<endl;
    }

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--);
    solve();
}
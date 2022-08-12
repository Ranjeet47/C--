#include <bits/stdc++.h>
using namespace std;

void solve(){
int a,b,c;
cin>>a>>b>>c;
//cout<<min(a,min(b,c))<<" "<<max(a,max(b,c));
//or we can also write
cout<<min({a,b,c})<<endl;
cout<<max({a,b,c})<<endl;
/*old style
    if(a>b&&a>c){
    cout<<a<<endl;
    }else if(b>c){
    cout<<b<<endl;
    }else{
    cout<<c<<endl;
    }
*/
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--)
    solve();
}
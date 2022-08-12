#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    cout<<"flor of A/B = "<<a/b<<'\n';
    cout<<"ceil of A/B = "<<(a+b-1)/b<<'\n';
    cout<<"round of A/B = "<<(2*a+ b)/(2*b)<<'\n';//the idea here is we add 1/2 in a given number
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--);
    solve();
}
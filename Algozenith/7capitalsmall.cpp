#include <bits/stdc++.h>
using namespace std;
/* 0-9 - 48-57
A-Z - 65-90
a-z - 97-122 */


void solve(){
char ch;
cin>>ch;

    if(ch>=48 && ch<=57){
                         cout<<"digit"<<endl;
                        }
    else if(ch>='A'&& ch<='Z'){
                         cout<<"big"<<endl;
                              }
    else if(ch>='a' && ch<='z'){
                          cout<<"small"<<endl;
                           }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;while(t--);
    solve();
}
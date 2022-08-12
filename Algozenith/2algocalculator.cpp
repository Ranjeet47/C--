#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
/*many time TLE(time limit exceed) also happen due to use of endl multiple time so we can use '\n' for this 
if we already write the code in then through this we don't needto change 
*/
void solve(){
    long long x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<"= "<<x+y<<'\n';
    cout<<x<<" - "<<y<<"= "<<x-y<<'\n';
    cout<<x<<" * "<<y<<"= "<<x*y<<'\n';

    /*second way to write the same problem.instead using long long we can also use int but int limit is 10 power 9 only so in
     multiplication we may face problems so it is helpful use 1LL so it convert first term in to long and if we multiply int to 
     lomng nothig error we get */
    int  x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<"= "<<x+y<<'\n';
    cout<<x<<" - "<<y<<"= "<<x-y<<'\n';
    cout<<x<<" * "<<y<<"= "<<1LL*x*y<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //int t;cin>>t;while(t--);
    solve();
}

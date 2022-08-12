#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;//after cin if you have to switch to a getline use a simple dummy getline 
    string temp;
    getline(cin,temp);
    string s[n];
    for(int i=0;i<n;i++){
    //cin>>s[i];
    getline(cin,s[i]);
    }  
    for(int i=n-1;i>=0;i--){
    cout<<"hi "<<s[i]<<endl;
    
    }


}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

//int t;cin>>t;while(t--)
solve();


}
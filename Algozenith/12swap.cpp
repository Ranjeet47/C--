#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    int t,a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    
}
    
    return 0;
}
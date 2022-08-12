#include<bits/stdc++.h>
using namespace std;

int Ap(int n){
    int ans = ((3*n) +7);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"the "<<n<<" term of the AP is equal to " <<Ap(n)<<endl;
    return 0;
}
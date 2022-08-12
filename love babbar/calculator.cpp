#include<bits/stdc++.h>
using namespace std;
signed main(){
    int a,b;
    char op;
    cin>>a>>b;
    cin>>op;

    switch(op){
        case '+':cout<<a+b<<endl;
                 break;
        case '-':cout<<a-b<<endl;
                 break;
        case '*':cout<<a*b<<endl;
                 break;
        case '/':cout<<a/b<<endl;
                 break;
        case '%':cout<<a%b<<endl;
                 break;
        default:cout<<"please enter a valid operation"<<endl;
    }
    return 0;
}
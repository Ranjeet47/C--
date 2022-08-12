#include<bits/stdc++.h>
using namespace std;

bool is1present(int arr[],int n){
    int katppa = 1;
    for(int i=0;i<n;i++){
        if(arr[i]==katppa){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(is1present(arr,n)){
        cout<<"1 is present inside the given array ";
    }else{
    cout<<"1 is not present inside the given array ";}
    return 0;
}
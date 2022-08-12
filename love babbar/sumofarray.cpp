#include<bits/stdc++.h>
using namespace std;

int Sumofarr(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of all the array element is equal to "<<Sumofarr(arr,n)<<endl;
    return 0;
}
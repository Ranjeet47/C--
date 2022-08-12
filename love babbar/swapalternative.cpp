#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n){
    int start =0,end=1;
    while(start<(n-2)){
    swap(arr[start],arr[end]);
    start  +=2;
    end +=2;}
    //agr while loop me start<n-1 rakega toh phie ye niche wala loop bhi rakhna padega

    /*if(start=(n-1)){
    swap(arr[n-1],arr[n-1]);
    }*/
}
//2nd method
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i +=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    
    return 0;
}
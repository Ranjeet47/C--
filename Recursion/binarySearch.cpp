#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int s,int e,int k){
   
    int ans = -1;
    int mid= s + (e-s)/2;
    if(s>e){
        return -1;
        }
    if(k==arr[mid]){
    return mid;
    }
    else if(k>arr[mid]){
    return binarySearch(arr,mid+1,e,k);
    }
    else{
       return binarySearch(arr,s,mid-1,k);  
    }
  

}

int  main(){
    int arr[]={2,4,5,6,8,9};
    int s=0,e=5;

    int key = 8;
    int ans = binarySearch(arr,s,e,key);
    cout<<ans<<endl;

    return 0;
}
#include<iostream>
using namespace std;

void mergeSort(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    
}

int main(){
    int arr[5]= {2,8,8,5,9};
    int n =5;
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";

    }
    cout<<endl;
    
 return 0;

}
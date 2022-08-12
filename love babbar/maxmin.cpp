#include<bits/stdc++.h>
using namespace std;

int getMax(int num[],int size){
    int max= INT_MIN;
    for(int i=0;i<size;i++){
        if(num[i]>max){
        max = num[i];
        }
       
    }
    return max;
}

int getMin(int num[],int size){
    int min= INT_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<min){
        min = num[i];
        }
       
    }
    return min;
}

//for max we can write in new way maxi = max(maxi,num[i])
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum value is equal to "<<getMax(arr,size)<<endl;
    cout<<"Minimum value is equal to "<<getMin(arr,size)<<endl;
    return 0;
}
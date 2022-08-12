#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){
 //base case 
  if(size==0||size ==1){
      return true;
  }
  if(arr[0]>arr[1]){
      return false;
  }
  else{
     bool ans = isSorted(arr+1,size-1);
      return ans;
  }

}


signed main(){
    int arr[]= {2,2,2,2,2};
    int size = 5;
    bool ans = isSorted(arr,size);
    
    if(ans){
        cout<<"your array is fucking sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }

}
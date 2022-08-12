#include <bits/stdc++.h>
using namespace std;

int sumofArray(int *arr,int size){
    int sum =0;
    if(size == 0){
        return 0;
    }
   
    
    else{
        sum  = arr[0] + sumofArray(arr+1,size-1);
       
    }
     return sum;
}
signed main(){
    int arr[]={2,3,6,8,9};
    int size=5;
    int ans =sumofArray(arr,size);

   
        cout<<ans<<endl;
  
    return 0;
}
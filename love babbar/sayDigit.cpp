#include <bits/stdc++.h>
using namespace std;

 /*
 void sayDigit(int n,string arr[]){
     if(n==0){
         return ;
     }
    int digit = n%10;
    n = n/10;
    sayDigit(n,arr);
     cout<<arr[digit]<<endl;
    }

signed main(){
    int n;
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
    return 0;
}
*/
 
int sumofarr(int *arr,int n){
    if(n==0){
    return 0;
    }
    if(n==1){
        return arr[0];
    }
    else {
        return arr[0] + sumofarr(arr+1,n-1);
    }
   
}

signed main(){
int arr[]= {2,4,6,3,25};
int n = 5;
cout<<sumofarr(arr,n)<<endl;
}
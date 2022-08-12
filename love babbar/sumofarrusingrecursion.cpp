#include <std/c++.h>
using namespace std;

int sumofarr(int *arr,int n){
    if(n==0){
    return 0;
    }
   
    int sum +=arr[0];
    sumofarr(arr+1,n-1);
    return sum;
}

signed main(){
int arr[]= {2,4,6,,3,5};
int n = 5;
cout<<sumofarr(arr,n)<<endl;
}
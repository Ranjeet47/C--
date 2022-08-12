#include<bits/stdc++.h>
using namespace std;

void findUnique(int arr[],int n){
    int ans=0;
for(int i=0;i<=n-1;i+=2){    
ans +=arr[i]^arr[i+1];
}
cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
findUnique(arr,n);
return 0;

}
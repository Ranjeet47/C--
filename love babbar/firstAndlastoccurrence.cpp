#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n ,int key){
    int s=0,ans=-1;
    int e= n-1;
    int mid = s + (e-s)/2;
while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      e=mid-1;
    }
    else if(arr[mid]>key){
        e = mid-1;
    }
    else if(arr[mid]<key){
        s = mid+1;
    }
    mid = s + (e-s)/2;
}
return ans;
}

int lastOcc(int arr[],int n ,int key){
    int s=0,ans=-1;
    int e= n-1;
    int mid = s + (e-s)/2;
while(s<=e){
    if(arr[mid]==key){
      ans = mid;
      s=mid+1;
    }
    else if(arr[mid]>key){
        e = mid-1;
    }
     else if(arr[mid]<key){
        s = mid+1;
    }
    mid = s + (e-s)/2;
}
return ans;
}


int main(){

    int odd[5] = {2,4,6,6,10};
    int even[8] ={1,3,12,46,90,90,90,99};
    int kk[0]={};
    cout<<"first occurrences of 6 is at index"<<firstOcc(odd,5,6)<<endl;
    cout<<"last occurrences of 6 is at index"<<lastOcc(odd,5,6)<<endl;
      cout<<"first occurrences of 90 is at index "<<firstOcc(kk,0,5)<<endl;
    cout<<"last occurrences of 90 is at index "<<lastOcc(kk,0,5)<<endl;
    return 0;
}
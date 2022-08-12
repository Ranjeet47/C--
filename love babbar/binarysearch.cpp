#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid= (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end= mid-1;
        }
        mid = (start+end)/2;

    }
    return -1;
}


int main(){
    int even[6]={2,4,6,8,12,48};
    int odd[5]={9,12,48,53,95};

    int key;
    cin>>key;
    int evenindex = binarySearch(even,6,key);
    cout<<"evenindex of "<<key<<" is "<<evenindex<<endl;

    int oddindex = binarySearch(odd,5,key);
    cout<<"oddindex of "<<key<<" is "<<oddindex<<endl;
}
#include <iostream>
using namespace std;

int main(){
    int A[10] = {5,7,8,9,45,56,84,86,99,100};
    int l=0,h=9,mid,key;
    cout<<"enter key ";
    cin>>key;

    
    while(l<=h){
        mid = (l+h)/2;
              if(A[mid]== key)
              {
               cout<<"key found ";
               return 0;
              }
              else if(key<A[mid]){
             h = mid-1;
              }
              else {
              l = mid +1 ;
            }

    }
    cout<<"key not found ";
    return 0;
}
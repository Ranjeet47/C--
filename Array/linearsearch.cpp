#include <iostream>
using namespace std;

int main() {
    int A[10],n=10,key;
cout<<"give the array input  ";
for(int i=0;i<10;i++){
    cin>>A[i];
}
cout<<"enter key ";
cin>>key;

for(int i=0;i<10;i++){
    if(A[i] == key){
        cout<<"search operation sucessful "<<i;
    }
}
cout<<"key is not found ";
    return 0;
}

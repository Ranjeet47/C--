#include <iostream>
using namespace std;
int main(){
int a = 0;
int arr[] = {9, 201, 33, 23, 33, 14, 9, 5, 201, 5, 19, 14};

for(int i = 0; i< 243; i++){
for(int j = 0; j< 12; j++)
a = a^arr[i];
}

cout<<a;
return 0;
}
#include <iostream>
using namespace std;

int main(){
int A[7] = {2,8,45,86,78,49,52};    
int max = A[0];

for (int i = 1; i < 7; i++)
{
    if(A[i]>max){
        max = A[i];
    }
    
}

cout<<max<<endl;

    return 0;

}
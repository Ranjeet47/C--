#include <iostream>
using namespace std;

int sqrtFloor(int x)
{int  i= 1;

while(i*i<=x)
i++;
return (i-1);
}

int main(){
cout<<sqrtFloor(50);
    return 0;
}

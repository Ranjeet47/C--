#include <iostream>
using namespace std;

int countdigit(long n)
{  
    if(n==0)
    return 0;
      return 1+ countdigit(n/10);
    

}
int main() {
    long a= 1000000000;
    cout<<countdigit(a);

}
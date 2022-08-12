#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0 ;
    cout<<"user give the input \n";
    cin>>n;
    sum = sum + n*(n+1)/2;
    cout<<"the sum of first n natural number is "<<sum<<endl;


    return 0;
}
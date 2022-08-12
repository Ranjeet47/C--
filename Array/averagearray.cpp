#include <iostream>
using namespace std;

int main(){
    int n;
    float num[100],sum=0.0,average;
    cout<<"enter the number ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". enter the number ";
        cin>>num[i];

        sum = sum +num[i];
        

    }
    average = sum/n;
    cout<<average;

    return 0;

}
#include <iostream>
using namespace std;
int main(){
    float age;
    cout<<"give the value of age ";
    cin>>age;
    if(age<12 || age>50){
        cout<<"you are not eligible to contribute in economy of countrt";
    }
    else{
        cout<<"you are a young men you should contribute to your country ";
    }
    return 0;
}
#include <iostream>
#include<set>
#include <string>
#include <functional>
using namespace std;

int main(){
    std::set<int>Sec={1,2,3,4,5,5,4,3,2,1};
    for(auto &x:Sec){
        cout<<x<<endl;
    }
    return 0;
}
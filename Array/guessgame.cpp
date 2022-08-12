#include <iostream>
using namespace std;
int main(){
int secretnum = 7;
int guess;
int guesscount= 0;
int guesslimit = 3;
bool outofguess = false;

while(secretnum != guess && !outofguess){
    if(guesscount<guesslimit){
    cout<<"enter the guess number ";
    cin>>guess;
    guesscount++;}
    else{
    outofguess = true;}
}
if( outofguess ){
    cout<<"HR fucked you,you lost!!";
}else{
    cout<<"you get the internship!";
}
    return 0;
}
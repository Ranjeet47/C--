#include <iostream>
using namespace std;

int main(){
    int n,rev,m;
    cout<<"give a positive number as ainput ";
    cin>>n;
    while(n>0){
        m = n%10;
        n= n/10;
        rev = rev*10 +m;
    }
    

    switch (m)
    {
    case 1:if (m==1){
                    cout<<"one";
                    }
            break;
    case 2:if (m==2){
                    cout<<"two";
                    }
            break;
    case 3:if (m==3){
                    cout<<"three";
                    }
            break;
     case 4:if (m==4){
                    cout<<"four";
                    }
            break;
    case 5:if (m==5){
                    cout<<"five";
                    }
            break;
    case 6:if (m==6){
                    cout<<"six";
                    }
            break; 
    case 7:if (m==7){
                    cout<<"seven";
                    }
            break;
    case 8:if (m==8){
                    cout<<"eight";
                    }
            break;
    case 9:if (m==9){
                    cout<<"nine";
                    }
            break;
    case 10:if (m==0){
                    cout<<"zero";
                    }
            break;             
    default:
        break;
    }

    
    return 0;
}
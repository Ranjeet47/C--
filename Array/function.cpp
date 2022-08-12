/*#include <iostream>
using namespace std;
template <class T>
T max(T x, T y)
{
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int c = max(10,5);
    float d = max(2.3f,50.6f);

    cout<<c<<"  "<<d<<endl;

    return 0;*/

#include<iostream>
using namespace std;
    
template<class T>
T maxim(T a,T b)
    {
       return a>b?a:b;
    }
    
int main()
{   int a=12,b=14;
double x=2.3,y=1.4;
float m =2.3f,j=5.6f;
	cout<<maxim(a,b)<<endl;
	cout<<maxim(x,y)<<endl;
	cout<<maxim(m,j)<<endl;
	
	return 0;
	    
}
    

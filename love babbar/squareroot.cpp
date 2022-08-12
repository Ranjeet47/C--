#include <bits/stdc++.h>
using namespace std;
long long int tempsqrt(int n){
       int s=0,e=n;
       long long int mid = s + (e-s)/2;
       int ans =-1;
       
       while(s<=e){
         long long int square = mid *mid;  
         if(square == n){
             ans = mid;
             return ans;
         }else if(square<n){
             ans = mid;
             s = mid+1;
         }else{
             e = mid-1;
         }
         mid = s + (e-s)/2;  
       }
       return ans;
} 

double mainsol(long long int n,int precision ,int tempsol){
double factor =1;
double ans = tempsol;
for(int i=0;i<precision;i++){
    factor = factor/10;
    for(double j=ans;j*j<n;j=j+factor){
        ans =j;
    }
}
return ans;
}

int main(){
    long long int n;
    cin>>n;

    long long int tempsol = tempsqrt(n);
    cout<<mainsol(n,3,tempsol);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    IOS
    int t;
    cin>>t;
  
    while(t--){
       long long count =0;
        int n;
        int arr[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1; ){
            if(arr[i+1]>=arr[i]){
                i++;
            }else{
               
                while(arr[i+1]<arr[i]){
                    arr[i+1] += 1;
                    count++;
                }
                i++;
            }
            }
            cout<<count<<'\n';
        
    }
}
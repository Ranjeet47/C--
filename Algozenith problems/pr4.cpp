#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m,k;
vector<int> arr,brr;


int check(int x)
{    
    int cnt=0;
    for(int i=0;i<n;i++)
    {   
        
        cnt +=upper_bound(brr.begin(),brr.end(),x-arr[i])-brr.begin();
        
    }
    
    if(cnt>=k) return 1;
    else return 0;
}


signed main()
{  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int t; cin>>t;
while(t--)
{     cin>>n>>m>>k;
    arr.resize(n);
    brr.resize(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    if(n>m){
        swap(n,m);
        swap(arr,brr);
    }
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    cin>>n>>m>>k;
    
    int lo=arr[0]+brr[0];
    int hi=arr.back()+brr.back();
    int ans=hi;
    
    while(lo<=hi)
    {
        int mid=(hi+lo)/2;
        
        if(check(mid))
        {
            ans=mid;
            hi=mid-1;            
        }
        else
        lo=mid+1;
    }
    
    cout<<ans<<"\n";
}

    
}
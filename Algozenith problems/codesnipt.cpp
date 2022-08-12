#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
lli n,m,k;
vector<int> arr,brr;

lli check(lli x){
    int cnt =0;
    for(int i=0;i<n;i++){
        cnt += upper_bound(brr.begin(),brr.end(),x-arr[i])-brr.begin();
    }
    if(k>=cnt) return 1;
    else return 0;
}
void solve(){
    cin>>n>>m>>k;
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

    lli lo= arr[0]+brr[0];
    lli hi = arr.back() + brr.back();
    lli ans = hi;
    while(lo<=hi){
        lli mid = (lo+hi)/2;
        if(check(mid)){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    cout<<ans<<'\n';
}

signed main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int _t;cin>>_t;
while(_t--){
   solve();
}
}
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double
#define endl '\n'

class Solution {
public:
   vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            
            for(int j=1;j<i;j++){
                r[i][j]= r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
        
        
    }
};

signed main() {
    IOS
    int n;
    cin>>n;
    cout<<generate(n)<<endl;
    
}
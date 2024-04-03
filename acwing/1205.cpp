#include <iostream>
#include <cmath>

using namespace std;
int dp[1000000];
int main() {
    int m,n,ans;
    cin>>n>>m;
    if(n>m){
        int t=n;
        n=m;
        m=t;
    }//keep n<m
    dp[0]=1;
    // int li=m%n==0?n:m;
    // for(int i=0;i<li;i++)dp[i]=1;
    for(int i=1;i<m*n;i++){
        if(i>=n && dp[i-n])dp[i]=1;
        else if(i>=m && dp[i-m])dp[i]=1;
        else {
            ans=i;
        }
    }
    cout<<ans;
   return 0;
}
#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;
ll dp[25][25];
int main() {
    for(int i=1;i<=20;i++)
    {
        dp[0][i]=1;
        dp[i][0]=1;
    }
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){
            // if(i==1 || j==1)dp[i][j]=1;
            // else
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[20][20];
    return 0;
}
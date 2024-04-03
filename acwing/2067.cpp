#include <iostream>
#include <cstring>

using namespace std;
int a[33][33];
int main() {
    memset(a,0,sizeof a);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if(j==1)  a[i][j]=1;
            else if(i&1 || j&1)
            a[i][j]=a[i-1][j]+a[i][j-1];
            // else
        }
    }
    cout<<a[n][m];
   return 0;
}
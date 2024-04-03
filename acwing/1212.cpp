#include <iostream>
#include <cstring>
typedef long long ll;
using namespace std;
const int mod=1e9+7;
int s[60][60];
ll f[60][60][15][15];//i j max jianshu = fanganshu 
int main() {
    ll countt=0;
    
    
    memset(f,0,sizeof f);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>s[i][j];
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
    if(i==1 )
        f[i][j][s[i][j]][j]=1;
        if(j==1 )
        f[i][j][s[i][j]][i]=1;
    }

    for(int i=2;i<=n;i++)
    for(int j=2;j<=m;j++){
        for(int x=1;x<=12;x++){
            for(int y=1;y<=k;y++){
                f[i][j][x][y]=f[i-1][j][x][y]+f[i][j-1][x][y];//不拿当前
                if(s[i][j]>x){//take
                    f[i][j][s[i][j]][y]+=(f[i-1][j][x][y-1]+f[i][j-1][x][y-1])%mod;
                }    
            }
        }
    }
    for(int x=1;x<=12;x++){
        countt+=f[n][m][x][k]%mod;
    }
    cout<<countt;
   return 0;
}
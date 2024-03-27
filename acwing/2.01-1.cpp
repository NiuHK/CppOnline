 #include <iostream>
 
 using namespace std;
 int f[1000];
 int v[1000],w[1000];
 int main() {
    int n,m;
    cin>>n>>m;
    for(int i = 1; i <= n; i++) 
        cin >> v[i] >> w[i];
    for(int i=1;i<=n;i++){//件数
        for(int j=m;j>=1;j--){//容量
            //  当前背包容量装不进第i个物品，则价值等于前i-1个物品
            if(j < v[i]) 
                f[j] = f[j];
            else
            f[j]=max(f[j],f[j-v[i]]+w[i]);
            // f[i][j]=f[i-1][j];//Don't choose
            // f[i][j]=f[i-1][j-v[i]]+w[i];//choose
        }

    }
    cout<<f[m];
    return 0;
 }
// #include <iostream>
// #include <cstring>

// using namespace std;
// const int mod=1e9+7;
// int s[60][60];
// int f[60][60][15][mod+1];//i j max count
// int main() {
//     memset(f,0,sizeof f);
//     int n,m,k;
//     cin>>n>>m>>k;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++){
//             cin>>s[i][j];
//         }
//         for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++){
//             for(int z=0;z<16;z++){
//                 for(int y=0;y<=k;y++){
//                     // f[i][j][z][y]+=(f[i-1][j][z][y]+ f[i][j-1][z][y])%mod;//不取s[i][j]
//                     for(int x=0;x<z;x++){//取s[i][j] 
//                        f[i][j][z][y]+=max(f[i-1][j][x][y-1]+f[i][j-1][x][y-1],f[i-1][j][z][y]+ f[i][j-1][z][y])%mod;
//                     }
                    
//                 }
//             }
            
//         }
//    return 0;
// }
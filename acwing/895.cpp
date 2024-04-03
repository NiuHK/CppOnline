#include <iostream>
#include <cstring>

using namespace std;

int f[1010][2];
int main() {
    int m=0;
    memset(f,0,sizeof f);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>f[i][0];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(f[i][0]>f[j][0]){
                f[i][1]=max(f[j][1]+1,f[i][1]);
                if(m<f[i][1]) m=f[i][1];
            }
        }
    }
    cout<<m+1<<std::endl;
   return 0;
}
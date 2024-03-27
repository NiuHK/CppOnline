#include <iostream>
#include <cstring>

using namespace std;
long long s[105][2];
long long f[105][105][2];
int main() {
    int t;
    cin>>t;
    int r,c;
    while(t--){
        cin>>r>>c;
        for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++){
            cin>>s[j][0];
            if(i>1)
            s[j][1]=max(s[j-1][1],s[j][1])+s[j][0];
            else
            s[j][1]=(s[j-1][1]>0?s[j-1][1]:0)+s[j][0];
        }
        cout<<s[c][1]<<endl;
    }
   return 0;
}
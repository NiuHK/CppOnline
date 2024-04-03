#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
const int N=5e6+10;
int st[N]={-1};
int main() {
    int n;
    cin>>n;
    memset(st,-1,sizeof st);
    for(int c=0;c*c<n;c++){
        for( int d=c;d*d+c*c<=n;d++){
            if(st[d*d+c*c]==-1){
                st[d*d+c*c]=c;//和相同时留字典序最小的
                // cout<<c<<" "<<d<<"\n";
            }
        }
    }
    for (int a=0;a*a<n;a++){
        for(int b=a;b*b+a*a<n;b++){
            int t=b*b+a*a;
            //找到匹配的cd
            int c=st[n-t];
            if(c!=-1){
                int d=sqrt((n-t)-c*c);
                printf("%d %d %d %d\n",a,b,c,d);
                return 0;
            }
        }
    }
    return 0;
}
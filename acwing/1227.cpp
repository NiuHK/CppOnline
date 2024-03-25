#include <iostream>

using namespace std;
const int N=100010;
int n,k,Max=0;
int H[N][2];
bool check(int a){
    int count=0;
    for(int i=0;i<n;i++){
        int h=H[i][0]/a,l=H[i][1]/a;
        if(l*h>0) 
        count+=l*h;
    }
    if(count<k)return 0;
    if(a>Max) Max=a;
    return 1;
}
int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>H[i][0]>>H[i][1];
    }
    int l=0,r=1e5;
    while(l<r){
        int mid=l+r+1>>1;
        if(check(mid)) l=mid;
        else r=mid-1;
    }
    cout<<Max;
   return 0;
}
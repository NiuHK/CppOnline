#include <iostream>

using namespace std;
const int N=100010;
int s[N];
int n;
bool check(int c){
    for(int i=1;i<n+1;i++){
        c=2*c-s[i];
        if(c>1e5) return true;
        if(c<0) return false;

    }
    return 1;
}
int main() {

    scanf("%d",&n);
    s[0]=0;
    for(int i=1;i<=n;i++) scanf("%d",&s[i]);
    int l=0,r=1e5;
    int mid;
    while(l<r){ 
        
        mid=l+r >>1;
        if(check(mid))r=mid;//mid->[0]
        else l=mid+1;
        // cout<<mid<<" ";
    }
    cout<<l; 
   return 0;
}
#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;
int a[40];//0-36  1-4
int t=0;
void dfs(int s,int n){
    if(n==0){
        a[t]++;
        return;
    }
    for(int i=0;i<=s;i++){
        t+=i;
        dfs(i,n-1);
        t-=i;
    }
    n--;
}
int main() {
    memset(a,0,sizeof a);
    dfs(9,4);
    ll cou=0;
    for(int i=1;i<=36;i++){
        cou+=a[i]*a[i];
    }
    cout<<cou^cou;
    return 0;
}
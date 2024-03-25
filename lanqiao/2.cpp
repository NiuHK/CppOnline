#include <iostream>

using namespace std;
bool vis[10]={0};
int st[10]={-1};
int N;
void dfs(int n){//当前位数
    if(n>N){
        for(int i=1;i<N+1;i++){
                cout<<st[i];
            }
            cout<<endl;
            return;
    }
    for(int i=1;i<N+1;i++){
        if(!vis[i]){
            vis[i]=1;
            st[n]=i;
            dfs(n+1);
            vis[i]=0;
        }
    }
    
}

int main() {
    // cin>>N;
    N=3;
    dfs(1);
   return 0;
}
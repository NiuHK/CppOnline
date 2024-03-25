#include <iostream>
using namespace std;
bool vis[20]={0};
void out(int a,int n){//当前a
    if(a>n){
        for(int k=1;k<a;k++){
            if(vis[k])
            cout<<k<<" ";
        }
        cout<<endl;
        return ;
    }
    vis[a]=1;
    out(a+1,n);
    vis[a]=0;
    out(a+1,n);
}
int main(){
    int n;
    cin>>n;
        out(1,n);
    
}
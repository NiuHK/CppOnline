#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;
struct st{
    int con[400]={-1};
    int Ncon=0;
    int ti;
}list[50010];
int co[50010];
int n;
int counts=0;
void dfs(int t){
    co[t]=max(co[t],counts);
    if(list[t].ti<=0){
        
    // cout<<" back ";
        return;
    }
    // cout<<t<<"->";

    int te=0;
    while(te<list[t].Ncon){
        list[t].ti--;
        counts++;

        dfs(list[t].con[te]);

        counts--;
        list[t].ti++;
        te++;
    }
    return;
}
int main() {
    cin>>n;
    memset(co,0,sizeof co);
    for(int i=0;i<n;i++){
        cin>>list[i].ti;
    }
    int a,b;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        list[a].con[list[a].Ncon++]=b;
        list[b].con[list[b].Ncon++]=a;
    }

    dfs(0);
    for(int i=0;i<n;i++){
        cout<<co[i]<<"\n";
    }

    return 0;
}
// 3
// 2 6 2
// 0 1
// 1 2
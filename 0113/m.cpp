#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,s;
    cin>>n>>m>>s;
    vector<vector<int>> t;
    // int *t1=new int[n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        t[i][j]=-1;
    }
    }
    for(int i=0;i<m;i++){
        int a,x,y;
        cin>>x>>y>>a;
        t[x][y]=a;
    }
   int *count=new int[n];
    int *final=new int[n];

    final[s-1]=0;
    count[s-1]=1;

 for(int j=0;j<n;j++){
    int min=0;
    for(int i=0;i<n;i++){
        if( i!=j && t[s-1][i]<t[s-1][min] )
        min=i;
    }
 }

}
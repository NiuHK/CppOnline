#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
const int sw=1e5;
long long a[sw+10][15];
int l[sw+10];
long long st[15][sw+10];
void check(int c,int k){
    int n=1;
    int te=a[c][0];
    while(n<10){
        te=(te*10)%k;
        st[n][te]+=1;
        // a[c][n]=te;
        n++;
    }

    te=a[c][0];
    int count=0;
    while(te){
        count++;
        te/=10;
    }
    l[c]=count;
}
int main() {
    memset(st,0,sizeof st);
    int n,k,way=0;
    string t;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        check(i,k);
    }
    for(int i=0;i<n;i++){
        // cout<<l[i]<<" ";
        for(int j=0;j<n;j++){
            if(i!=j){
                way+=st[l[j]][a[i][0]%k];
                // int tr=(a[i][l[j]]+a[j][0])%k;
                // if(tr==0){
                //     way++;
                // // cout<<a[i][0]<<" "<<a[j][0]<<endl;
                // }
            }
        }
    }
    cout<<way;
return 0;
}
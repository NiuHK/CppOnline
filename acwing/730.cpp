#include <iostream>

using namespace std;
const int N=100010;
long long  a[N][2];

int main() {
    int n;
    a[0][0]=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i][0];
    }
    int s=1;
    while(s>0){
        a[0][1]=s;
        int i;

        for( i=1;i<=n;i++){
            a[i][1]=2*a[i-1][1]-a[i][0];
            if(a[i][1]<0) break;
            else if(a[i][1]>1e5){
                cout<<s<<endl;
            return 0;
            }
        }
        if(i>=n+1){
            cout<<s<<endl;
            return 0;
        }
        // cout<<s<<endl;
        s++;
    }

   return 0;
}
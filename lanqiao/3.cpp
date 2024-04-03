#include <iostream>

using namespace std;
int st[47]={-1};
int main() {
    st[1]=0;
    st[2]=1;
    int n;
    cin>>n;
    for(int i=3;i<n+1;i++)
        st[i]=st[i-1]+st[i-2];
    for(int i=1;i<n+1;i++){
    cout<<st[i]<<" ";
    }
   return 0;
}
#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;
int Count=0;
int a[N];
int n;
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int min,max;
    for(int i=0;i<n;i++){
        min=a[i];
        max=a[i];
        for(int j=i;j<n;j++){
            if(a[j]<min) min=a[j];
            else if(a[j]>max) max=a[j];
            if(max-min==j-i){
                // cout<<i<<" "<<j<<endl;
                Count++;
            }
        }
    }
    cout<<Count;
    return 0;
}
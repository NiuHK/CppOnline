#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;
int N;
ll counts=0;
int  a[3][100010];
int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[0][i];
    }
    for(int i=0;i<N;i++){
        cin>>a[1][i];
    }
    for(int i=0;i<N;i++){
        cin>>a[2][i];
    }

    sort(a[0],a[0]+N);
    sort(a[1],a[1]+N);
    sort(a[2],a[2]+N);

    for(int i=0;i<N;i++){//1
    int lmin=lower_bound(a[0],a[0]+N,a[1][i])-a[0]-1;
    int fmax=upper_bound(a[2],a[2]+N,a[1][i])-a[2];
    if(lmin>=0 && fmax <N)
    counts+=(ll)(lmin+1)*(N-fmax);
        // cout<<lmin<<" "<<fmax<<" "<<counts<<endl;
    }

    cout<<counts;


    return 0;
}
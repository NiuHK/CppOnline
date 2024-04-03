#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;
int a[15];
int main() {
    a[1]=1;
    a[2]=1;
    for(int i=3;i<13;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    int x=0,y=0;
    cin>>n;
    int step=0;
    while(n--){
        step++;
        char t;
        cin>>t;
        switch (t)
        {
        case 'U':
            y+=a[step];
            break;
        case 'R':
            x+=a[step];
            break;
        case 'L':
            x-=a[step];
            break;
        case 'D':
            y-=a[step];
            break;       
        default:
            break;
        }
    }
    cout<<x<<" "<<y;
        return 0;
}
#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int Nu=10010;
ll T=0;
void check(int b){
    int s;
    int a=b;
    while(a){
        s=a%10;
        a/=10;
        switch (s)
        {
        case 0 :
            T+=b;
            return;
        case 1 :
            T+=b;
            return;
        case 2 :
            T+=b;
            return;
        case 9 :
            T+=b;
            return;  
        default:
            break;
        }
    }
}
int main() {
    int n;
    cin>>n;
    n++;
    while(n--){
        check(n);
    }
    cout<<T;
    return 0;
}
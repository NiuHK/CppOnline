#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010;

int main() {
    int n[2];
    bool s=0;
    cin>>n[0]>>n[1];
    sort(n);
    while(n & m){
        s=!s;
        if(n<m)
        m%=n;
        else
        n%=m;
    }
    string d[2]={"xiaolan","Jay"};
    cout<<d[s];
    return 0;
}
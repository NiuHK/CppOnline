#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const int N=10010; 
ll t=19;
int main() {
    for(int i=20;i<39;i++){
        t*=i;
    }
    cout<<t;
    return 0;
}
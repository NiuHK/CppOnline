#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
typedef long long ll;
int c[20010];
int main() {
    int nu=0;
    int n;
    cin>>n;
    string t;
    n++;
    while(n--) {
        getline(cin,t);  
        stringstream ss(t);
        while(ss>>c[nu]){
        nu++;            
    }
    }

    sort(c,c+nu);

    nu--;

    int min=c[nu];
    int chong=0,duan=0;
    bool f1=0,f2=0;
    nu--;

    while(nu>=0){
        if(chong*duan!=0) break;
        if(c[nu]==min && !f1){
            chong=c[nu];
            f1=1;
        }else if(c[nu]!=min-1 && !f2){
            duan=c[nu]+1;
            f2=1;
        }
            min=c[nu];
        nu--;
    }

    cout<<duan<<" "<<chong;
    return 0;
}
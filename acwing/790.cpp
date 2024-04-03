#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double x,a=-10000,mid,b=10000;
    cin>>x;
    while(b-a>=1e-7){
        mid=(a+b)/2;
        if(x<=mid*mid*mid) b=mid;
        else a=mid;
    }
    cout<<fixed<<setprecision(6)<<mid<<endl;
    cout<<fixed<<setprecision(7)<<mid;
}




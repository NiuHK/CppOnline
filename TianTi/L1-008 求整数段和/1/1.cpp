#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0,t=0;
    for (int i=a;i<=b;i++){
        count++;
        cout<<right<<setw(5)<<i;
        t+=i;
        if(count%5==0) cout<<endl;
    }
    // cout<< right <<setw(5)<<a<<setw(5)<<b;
    if(count%5!=0) cout<<endl;
    cout<<"Sum = "<<t;
}
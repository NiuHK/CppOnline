#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    int l=sqrt((n+1)/2);
    int e=n-2*l*l+1;
    // cout<<l<<" "<<e;
for(int i=l;i>0;i--){
    for(int j=0;j<l-i;j++){
        cout<<" ";
    }
    for(int j=0;j<2*(i)-1;j++){
        cout<<c;
    }
cout<<endl;
}
for(int i=2;i<l+1;i++){
    for(int j=0;j<l-i;j++){
        cout<<" ";
    }
    for(int j=0;j<2*(i)-1;j++){
        cout<<c;
    }
cout<<endl;
}
cout<<e;
}
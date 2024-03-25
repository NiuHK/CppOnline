#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct{
    long long n1;
    int n2,n3;
}st[1000];
int c[1000];

int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>st[i].n1>>st[i].n2>>st[i].n3;
}
int cn;
cin>>cn;
for(int i=0;i<cn;i++){
    cin>>c[i];
}
for(int i=0;i<cn;i++){
    for(int j=0;j<n;j++){
        if(c[i]==st[j].n2){
                cout<<st[j].n1<<" "<<st[j].n3<<endl;
        }
    }}
}
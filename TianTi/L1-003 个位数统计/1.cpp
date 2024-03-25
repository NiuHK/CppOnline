#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    // char a='1',b='0';
    // cout<<(int)a<<(int)b;
    string c;
    int n[10]={0};
    cin>>c;
    for(int i=0;i<c.length();i++){
        // cout<<c[i];
        n[(int)c[i]-48]++;
    }
        for(int i=0;i<10;i++){
            if(n[i]!=0){
                cout<<i<<":"<<n[i]<<endl;
            }
    }
}
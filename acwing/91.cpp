#include <iostream>
using namespace std;
typedef long long ll;

int a[5][4*9];
void get(int t){
int num=0,sum=0;
while(t){
        sum+=t%10;
        t/=10;
        num++;
        }
a[num][sum]++;
}


int main() {
    int count=0;
    for(int i=1;i<=9999;i++){
        get(i);
    }

    for(int i=1;i<5;i++){
        for(int j=1;j<=i*9;j++){
            for(int k=1;k<=i;k++){
                if(a[i][j]==a[k][j]){
                    count+=a[i][j]*a[k][j];
                }
            }
        }

    }
    cout<<count;
   return 0;
}
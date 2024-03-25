#include <iostream>
#include <cmath>


using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    int t;
        cin>>t;
        n--;
            int min=t,max=t;
        while(n--){
            int q;
            
            cin>>q;
            if( abs(t) < abs(q) )
                if(t>0 && q<0) ans++;
            if( abs(t) > abs(q) )
                if(t<0 && q>0) ans++;
        }
        cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
};
int main(){
    solution ank;
    int n;
    cin>>n;
    ank.pattern12(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern16(int n){
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}    
};
int main(){
    solution ank;
    int n;
    cin>>n;
    ank.pattern16(n);
    return 0;
}
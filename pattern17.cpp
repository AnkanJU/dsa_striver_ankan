#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern17(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch;
        }
        for(char ch='A'+i-2;ch>='A';ch--){
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
    ank.pattern17(n);
    return 0;
}
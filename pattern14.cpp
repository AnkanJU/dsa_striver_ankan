#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}    
};
int main(){
    solution ank;
    int n;
    cin>>n;
    ank.pattern14(n);
    return 0;
}
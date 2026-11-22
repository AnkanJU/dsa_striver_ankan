#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern15(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+n-i;ch++){
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
    ank.pattern15(n);
    return 0;
}
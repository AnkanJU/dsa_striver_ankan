#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern18(int n){
    for(int i=1;i<=n;i++){
    
        for(char ch='A'+n-i;ch<='A'+n-1;ch++){
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
    ank.pattern18(n);
    return 0;
}
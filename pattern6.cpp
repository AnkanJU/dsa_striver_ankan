#include<bits/stdc++.h>
using namespace std;
class solution{
public: void pattern6(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
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
    ank.pattern6(n);
    return 0;
}
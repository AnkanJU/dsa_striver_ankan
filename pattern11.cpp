#include<bits/stdc++.h>
using namespace std;
class solution {
public: void pattern11(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            start=0;
        }
        else{
            start=1;
        }
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }
}
};
int main(){
    solution ank;
    int n;
    cin>>n;
    ank.pattern11(n);
    return 0;
}
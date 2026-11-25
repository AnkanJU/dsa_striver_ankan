#include<bits/stdc++.h>
using namespace std;
class Solution {
public: int reverseNumber(int n){
        int reversed = 0;
        while (n != 0) {
            int digit = n % 10; 
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        return reversed;
    }    
};
int main() {
    int n;
    cin >> n;
    Solution ank;
    cout << ank.reverseNumber(n) << endl;
    return 0;
}
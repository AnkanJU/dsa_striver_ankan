#include<bits/stdc++.h>
using namespace std;
class Solution {
public: bool isPalindrome(int n){
        int original = n;
        int reversed = 0;
        while (n != 0) {
            int digit = n % 10; 
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        return original == reversed;
    }        
};
int main() {
    int n;
    cin >> n;
    Solution ank;
    cout << (ank.isPalindrome(n) ? "true" : "false") << endl;
    return 0;
}
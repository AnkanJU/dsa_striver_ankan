#include<bits/stdc++.h>
using namespace std;
class Solution {
public: int countOddDigit(int n){
        if (n == 0) return 0;

        int count = 0;
        while (n > 0) {
            int digit = n % 10; 
            if (digit % 2 != 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};
int main() {
    int n;
    cin >> n;

    Solution ank;
    cout << ank.countOddDigit(n) << endl;

    return 0;
}
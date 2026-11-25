#include<bits/stdc++.h>
using namespace std;
class Solution {
public: int isArmstrong(int n) {
        int originalNum = n, sum = 0, digits = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }
        originalNum = n;
        while (originalNum != 0) {
            int digit = originalNum % 10;
            sum += pow(digit, digits);
            originalNum /= 10;
        }
        return sum == n;
    }    
};
int main() {
    int n;
    cin >> n;
    Solution ank;
    if (ank.isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}
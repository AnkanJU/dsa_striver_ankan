#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        // Edge case: 0 has 1 digit
        if (n == 0) return 1;

        int count = 0;
        while (n > 0) {
            count++;
            n = n / 10; // Drop the last digit
        }
        return count;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.countDigit(n) << endl;

    return 0;
}
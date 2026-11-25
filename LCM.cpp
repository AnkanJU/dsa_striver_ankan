#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LCM(int n1, int n2) {
        if (n1 == 0 || n2 == 0) return 0;

        int a = n1, b = n2;

        // Find GCD inside the same function
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        // 'a' now holds the GCD
        return (n1 / a) * n2;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Solution ank;
    cout << ank.LCM(n1, n2) << endl;

    return 0;
}
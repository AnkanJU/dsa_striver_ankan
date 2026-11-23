#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        // Upper half (rows 1 to n)
        for (int i = 1; i <= n; i++) {
            // Left stars: i stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Middle spaces: 2*(n - i) spaces
            for (int j = 1; j <= 2 * n - 2 * i; j++) {
                cout << " ";
            }
            // Right stars: i stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // Lower half (rows n-1 down to 1)
        for (int i = n - 1; i >= 1; i--) {
            // Left stars: i stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Middle spaces: 2*(n - i) spaces
            for (int j = 1; j <= 2 * n - 2 * i; j++) {
                cout << " ";
            }
            // Right stars: i stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    obj.pattern20(n);

    return 0;
}
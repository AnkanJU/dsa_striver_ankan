#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern21(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Print '*' on top row, bottom row, left column, or right column
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.pattern21(n);
    return 0;
}
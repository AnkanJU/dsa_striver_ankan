#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        // Total rows and columns = 2*n - 1 (0 to 2*n - 2)
        int size = 2 * n - 1;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // Distance from the 4 edges of the grid
                int top = i;
                int left = j;
                int bottom = (size - 1) - i;
                int right = (size - 1) - j;

                // Minimum distance to any border determines which concentric ring we are on
                int minDist = min(min(top, bottom), min(left, right));

                cout << (n - minDist) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution ank;
    ank.pattern22(n);

    return 0;
}
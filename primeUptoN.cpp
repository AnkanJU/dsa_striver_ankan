#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> primeUptoN(int n) {
        vector<int> primes;
        for (int i = 2; i <= n; ++i) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
            }
        }
        return primes;
    }
};

int main() {
    int n;
    cin >> n;

    Solution ank;
    vector<int> ans = ank.primeUptoN(n);
    for (int p : ans) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
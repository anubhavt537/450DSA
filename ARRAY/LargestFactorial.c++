#include <bits/stdc++.h> 
using namespace std;

vector<int> factorial(int N) {
    vector<int> ans(1, 1);  // Initialize vector with 1
    while (N > 1) {
        int carry = 0;
        int size = ans.size();
        for (int i = 0; i < size; i++) {
            int res = ans[i] * N + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while (carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        N--;
    }
    reverse(ans.begin(), ans.end());  // Reverse the result to get the correct order
    return ans;
}

string calculateFactorial(int n) {
    vector<int> result = factorial(n);
    string factorialStr = "";

    // Convert the vector of digits to a string
    for (int digit : result) {
        factorialStr += to_string(digit);
    }

    return factorialStr;
}
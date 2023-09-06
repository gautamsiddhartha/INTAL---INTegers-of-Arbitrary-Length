#include <iostream>
#include <string>

using namespace std;

string multiplyIntal(const string& intal, int num) {
    string result;
    int carry = 0;

    for (int i = intal.length() - 1; i >= 0; i--) {
        int digit = intal[i] - '0';
        int product = digit * num + carry;

        carry = product / 10;
        product = product % 10;

        result.insert(result.begin(), product + '0');
    }

    if (carry > 0) {
        result.insert(result.begin(), carry + '0');
    }

    return result;
}

string findFactorial(int n) {
    if (n == 0 || n == 1) {
        return "1";
    } else {
        string factorial = "1";

        for (int i = 2; i <= n; i++) {
            factorial = multiplyIntal(factorial, i);
        }

        return factorial;
    }
}

int main() {
    unsigned int n;
    
    cout << "Enter a non-negative integer n: ";
    cin >> n;

    string factorial = findFactorial(n);

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}

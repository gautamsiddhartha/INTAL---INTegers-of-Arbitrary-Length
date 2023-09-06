#include <iostream>
#include <string>
#include <vector>

using namespace std;

string addIntals(const string& intal1, const string& intal2) {
    string result;
    int carry = 0;

    int len1 = intal1.length();
    int len2 = intal2.length();
    int i = len1 - 1;
    int j = len2 - 1;

    while (i >= 0 || j >= 0 || carry) {
        int num1 = (i >= 0) ? (intal1[i] - '0') : 0;
        int num2 = (j >= 0) ? (intal2[j] - '0') : 0;
        int sum = num1 + num2 + carry;

        carry = sum / 10;
        sum = sum % 10;

        result.insert(result.begin(), sum + '0');

        i--;
        j--;
    }

    return result;
}

string findNthFibonacci(int n) {
    if (n <= 0) {
        return "0";
    } else if (n == 1) {
        return "1";
    } else {
        string fib1 = "0";
        string fib2 = "1";
        string result;

        for (int i = 2; i <= n; i++) {
            result = addIntals(fib1, fib2);
            fib1 = fib2;
            fib2 = result;
        }

        return result;
    }
}

int main() {
    unsigned int n;
    
    cout << "Enter the value of n: ";
    cin >> n;

    string nthFibonacci = findNthFibonacci(n);

    cout << "The " << n << "th Fibonacci INTAL is: " << nthFibonacci << endl;

    return 0;
}

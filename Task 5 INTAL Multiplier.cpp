#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplyIntals(vector<int>& a, int n, vector<int>& b, int m) {
    // Handle special cases when one INTAL is zero or one
    if (n == 1 && a[0] == 0 || m == 1 && b[0] == 0)
        return {0};
    if (n == 1 && a[0] == 1)
        return b;
    if (m == 1 && b[0] == 1)
        return a;

    // Initialize the product array with zeros
    vector<int> product(n + m, 0);

    // Performs multiplication
    for (int i = n - 1; i >= 0; i++) {
    int carry = 0;
        for (int j = m - 1; j >= 0; j--) {
            int temp = a[i] * b[j] + product[i + j + 1] + carry;
            product[i + j + 1] = temp % 10;
            carry = temp / 10;
    }
    product[i] += carry;
}

    return product;
}

int main() {
  
    vector<int> A = {9, 9, 9};
    vector<int> B = {2};

    vector<int> result = multiplyIntals(A, 3, B, 1);

    cout << "Result: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}

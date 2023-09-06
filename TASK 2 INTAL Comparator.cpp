#include <iostream>
#include <string>

using namespace std;

int compareIntals(const string& intal1, const string& intal2) {
    int len1 = intal1.length();
    int len2 = intal2.length();

    if (len1 < len2) {
        return -1;
    } else if (len1 > len2) {
        return 1;
    } else {
        // Both INTALs have the same number of digits
        for (int i = 0; i < len1; i++) {
            if (intal1[i] < intal2[i]) {
                return -1;
            } else if (intal1[i] > intal2[i]) {
                return 1;
            }
        }
        // If we reach here, both INTALs are equal
        return 0;
    }
}

int main() {
    string intal1, intal2;
    
    cout << "Enter the first INTAL: ";
    cin >> intal1;

    cout << "Enter the second INTAL: ";
    cin >> intal2;

    int result = compareIntals(intal1, intal2);

    if (result == -1) {
        cout << "First INTAL is lesser than second INTAL." << endl;
    } else if (result == 1) {
        cout << "Second INTAL is lesser than first INTAL." << endl;
    } else {
        cout << "Both INTALs are equal." << endl;
    }

    return 0;
}

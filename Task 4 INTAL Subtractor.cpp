#include <iostream>
#include <vector>
using namespace std;

// Funtion to reverse the final Sum
vector<int> reverse(vector<int>& arr)
{
    int s = 0;
    int e = arr.size() - 1;

while(s<e)
    {
        swap(arr[s++], arr[e--]);
    }
        return arr;
}

// Function to add two INTALs and return their sum
vector<int> subIntals(vector<int>& a, int n, vector<int>& b, int m) {
    
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int borrow = 0;


       while (i >= 0 || j >= 0) {
        int val1, val2;

        if (i >= 0) {
            val1 = a[i];
                    }       
        else    {
            val1 = 0;
            }

        if (j >= 0) {
            val2 = b[j];
                    } 
        else {
            val2 = 0;
            }

        int diff = val1 - val2 - borrow;

        if (diff < 0) {
            diff = diff + 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        ans.push_back(diff);
        i--;
        j--;
    }
return reverse(ans);

}

int main() {
    
    vector<int> A = {1, 0, 0, 0};
    vector<int> B = {1};

    vector<int> result = subIntals(A,4, B, 1);

    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit<<" ";
    }
    cout << endl;

    return 0;
}

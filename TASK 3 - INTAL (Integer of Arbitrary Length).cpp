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
vector<int> addIntals(vector<int>& a, int n, vector<int>& b, int m) {
    
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // CASE 1/3

    while(i>=0){
        int sum=a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    // CASE 2/3
     while(j>=0){
        int sum = b[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // CASE 3/3
     while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
return reverse(ans);

}

int main() {
    
    vector<int> A = {9, 9, 9};
    vector<int> B = {1};

    vector<int> result = addIntals(A,3, B, 1);

    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit<<" ";
    }
    cout << endl;

    return 0;
}

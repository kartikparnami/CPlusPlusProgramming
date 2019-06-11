/*
Question link: https://www.interviewbit.com/problems/find-duplicate-in-array/
*/

#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int repeatedNumber(const vector<int> &A) {
    int totalXor = 0;
    for (int i = 0; i < A.size(); i += 1) {
        totalXor = totalXor ^ A[i];
    }
    for (int i = 0; i < A.size() - 1; i += 1) {
        totalXor = totalXor ^ (i + 1);
    }
    if (totalXor == 0) {
        return -1;
    } else {
        return totalXor;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    vector<int> v(arr, arr + n);

    cout << repeatedNumber(v) << endl;
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

const int n = 12;
const int k = 3;

int main() {
  int arr[][n/k] = {{3, 6, 9, 12},
                 {2, 5, 8, 11},
                 {1, 4, 7, 10}};
  int index[k];
  int result[n];
  for (int i = 0; i < k; i++) {
    index[i] = 0;
  }
  for (int count = 0; count < n; count++) { // O(n)
    int minVal = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < k; i++) {
      if (index[i] < n/k && arr[i][index[i]] < minVal) { // O(k) 
        minVal = arr[i][index[i]];
        minIndex = i;
      }
    }
    result[count] = minVal;
    index[minIndex]++;
  }
  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
}
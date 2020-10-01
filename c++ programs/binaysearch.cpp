#include <iostream>
using namespace std;

int binary_search(int a[], int start, int end, int x) {
  if(start <= end) {
    int middle = (start+end)/2;
    if(a[middle] == x) {
      return middle;
    }

    if(a[middle] > x) {
      return binary_search(a, start, middle-1, x);
    }

    if(a[middle] < x) {
      return binary_search(a, middle+1, end, x);
    }
  }
  return -1; // not found
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index_result = binary_search(a, 0, 9, 7);

  cout<<index_result<<endl;
  return 0;
}

#include <iostream>
using namespace std;
int co=0,d=0,cq=0,count=0;


void merging(int arr[], int p, int q, int r) {
co++;
  int n1 = q - p + 1;
  count+=2;
  int n2 = r - q;

  int LeftArray[n1], RightArray[n2];
  count++;
  for (int i = 0; i < n1; i++){
        count++;
    LeftArray[i] = arr[p + i];
    count++;
  count++;
    }
    count++;

    count++;
  for (int j = 0; j < n2; j++){
        count++;
    RightArray[j] = arr[q + 1 + j];
    count++;
  count++;
    }
    count++;



  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  count+=3;

  while (i < n1 && j < n2) {
    count++;//while
    count++;
    if (LeftArray[i] <= RightArray[j]) {
      arr[k++] = LeftArray[i++];
      count++;
    } else {
      arr[k++] = RightArray[j++];
      count++;
    }
  }
  count++;

  while (i < n1) {
    arr[k++] = LeftArray[i++];
    count++;
    count++;
  }
  count++;

  while (j < n2) {
    arr[k++] = RightArray[j++];
    count++;
    count++;
  }
  count++;
}

void mergeSort(int arr[], int l, int r) {
    cq++;
    count++;
    count++;
  if (l < r) {
    int m = l + (r - l) / 2;
    d++;
    count++;
    count++;
    mergeSort(arr, l, m);
count++;
    mergeSort(arr, m + 1, r);
count++;
    merging(arr, l, m, r);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
  cout<<"total no of divide "<<d<<endl;
  cout<<"total no of Conquer "<<cq<<endl;
  cout<<"total no of combine "<<co<<endl;
    cout<<"Total no of instructions "<<count<<endl;
}


int main() {
   int n ;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  int size = sizeof(arr) / sizeof(arr[0]);
  count++;
  mergeSort(arr, 0, n - 1);
  printArray(arr, size);
  return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

void display(int*, int);

void heapify(int *arr, int n, int i)
{
  int largest = i;
  int l = 2*i+1;
  int r = 2*i+2;

  if (l < n && arr[l] > arr[largest])
    largest = l;
  if (r < n && arr[r] > arr[largest])
    largest = r;
  if (largest != i)
  {
    int temp = arr[largest];
    arr[largest] = arr[i];
    arr[i] = temp;
    heapify(arr, n, largest);
  }
}

void del(int *arr, int n)
{
    int last = arr[n-1];
    n = n-1;
    int ptr = 0, left = 1, right = 2;
    arr[ptr] = last;
    while(left <=  n)
    {
        if(arr[ptr] >= arr[left] && arr[ptr] >= arr[right])
            return;
        if(arr[left] > arr[right])
        {
            int temp = arr[ptr];
            arr[ptr] = arr[left];
            arr[left] = temp;
            ptr = left;
        }
        else
        {
            int temp = arr[ptr];
            arr[ptr] = arr[right];
            arr[right] = temp;
            ptr = right;
        }
        left = 2*ptr+1;
        right = 2*ptr+2;
    }

}

void heapsort(int *arr, int n)
{
    // Swap the first and last elem of arr. Delete the last elem and then heapify the resulting tree.
    int* f_arr = new int[n];
    int k = n-1;
    while(k >= 0)
    {
        int temp = arr[0];
        arr[0] = arr[n-1];
        arr[n-1] = temp;
        f_arr[k--] = arr[n-1];
        n--;
        for (int i = n/2-1; i >= 0; i--)
            heapify(arr, n, i);
    }
    arr = f_arr;
    delete[] f_arr;
}

void display(int *arr, int n)
{
    cout<<endl<<"Sorted Array is: " << '\t';
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int* arr = new int[n];
    cout << endl << "Enter Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Heapifying the array
    for(int i = n/2-1; i >= 0; i--)
        heapify(arr,n,i);
    heapsort(arr,n);
    display(arr,n);
    return 0;
}

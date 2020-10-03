// Author: Gaurav Gupta
// Github: gauravgupta45

#include <iostream>
#include <cmath>
using namespace std;

// Yellow range represents the elemnts having value < pivot.
// Green rnage represents the elements having value > pivot.
// We'll mark first element as our pivot. (Which is the worst case with time complexity of O(N^2))
void quicksort(int *arr, int l, int r)
{
    if(r-l<=1)
        return;
    int yellow = l+1;
    for(int green = yellow; green < r; green++)
    {
        if(arr[green]<=arr[l])                  //arr[l] is pivot here.
        {
            int temp1 = arr[yellow];
            arr[yellow] = arr[green];
            arr[green] = temp1;
            yellow++;
        }
    }

    // After getting here we've reached the intermidiate stage. Where left side of pivot contains value less then pivot and vice versa.
    // So we have to swap the piviot with the element next to yellow index.
    int temp2 = arr[l];
    arr[l] = arr[yellow-1];
    arr[yellow-1] = temp2;

    quicksort(arr,l,yellow-1);
    quicksort(arr,yellow,r);
}

int main()
{
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    quicksort(arr,0,n);
    for (int i = 0; i<n; i++)
        cout<<arr[i]<<"\t";
    return 0;
}

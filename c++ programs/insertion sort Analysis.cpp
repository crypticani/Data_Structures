#include<iostream>
using namespace std;

int count=0,exch=0,comp=0;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    count++;//initializing i
    for (i = 1; i < n; i++)
    {
        count++;//condition check i<n
        key = arr[i];
        count++;//initializing key
        j = i - 1;
        count++;//initializing j
        comp++;
        while (j >= 0 && arr[j] > key)
        {
            count++;//condition check
            arr[j + 1] = arr[j];
            exch++;
            j = j - 1;
            count+=2;//above instructions
        }

        count++;//condition of while loop evaluatess to false
        arr[j + 1] = key;
        count++;//above instruction
        count++;//incrementing i++
    }
    count++;//for loop conmdition evaluates to false
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    count++;//initializing n
    insertionSort(arr, n);
    count++;//function call
    printArray(arr, n);
    count++;//function call
    cout<<"Total no. of instructions executed : "<< count<<"\n";
    cout<<"Total no. of exchanges : "<< exch<<"\n";
    cout<<"Total no. of comparisions : "<< comp<<"\n";
    return 0;

}


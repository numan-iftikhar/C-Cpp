#include <iostream>
using namespace std;

void bubbleSort(int *, int);
void printArray(int *, int);

int main()
{
    int arr[] = {-2, 45, 20, 11, 14, 12, -9};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}
void bubbleSort(int *arr, int size)
{
    int temp;
    // outer loop is for passes
    // # of passes is always equal to size-1
    for (int i = 0; i < size - 1; i++)
    {
        // inner loop is for sorting
        for (int j = 0; j < size - i - 1; j++) // size-i-1 bcz sorting starts from right side
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " | ";
    cout << "\n";
}
#include <iostream>
using namespace std;
// In this function, it will sort the element from the back-side with Round-by-Round:
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
// Printing array after sorted:
int printingArray(int arr[], int size)
{
    cout << "Printing the array after sorted " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cout << arr[i] << endl;
    }
}
int main()
{
    // Bubble Sort:
    int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;
    cout << "Printing the array before sorted " << endl;
    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    // Calling functions:
    bubbleSort(arr1, size1);
    printingArray(arr1, size1);
}
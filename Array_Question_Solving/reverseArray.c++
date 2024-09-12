#include <iostream>
using namespace std;

int arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the array element at index : " << i << " ";
        cin >> arr[i];
    }
}

int reverseArray(int arr[], int size)
{
    for (int i = (size - 1); i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 5;
    int arr[size];

    arrayInput(arr, size);
    reverseArray(arr, size);

    return 0;
}
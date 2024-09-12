#include <iostream>
using namespace std;

int arrayinput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "enter the array element at index : " << i << " ";
        cin >> arr[i];
    }
}

int main()
{
    int size = 5;
    int arr[size];

    // it is for finding smallest number
    int smallest = INT8_MAX;
    int gratest = INT8_MIN;

    arrayinput(arr, size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > gratest)
        {
            gratest = arr[i];
        }
    }

    cout << "the smallest no is :" << smallest << "\n";
    cout << "the gratest no is :" << gratest;
}
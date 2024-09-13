// That Two PinterApproach is Very Important for DSA
// Because it used in linked list

#include <iostream>
using namespace std;

int twoPointerApproach(int arr[], int size)
{
    int start = 0;
    int end = (size - 1);
    for (int i = 0; i < size; i++)
    {
        if (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    return 0;
}

int main()
{
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    twoPointerApproach(arr, size);

    // print the reverse array element
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
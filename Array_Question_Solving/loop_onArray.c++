#include <iostream>

using namespace std;

// it function take the array input
int arrayinput(int arr[], int size)
{
    for (int i = 0; i < size; i++)

    {
        cin >> arr[i];
    }
}

int main()
{
    int size = 5;
    int arr[size];

    arrayinput(arr, size);

    for (int i = 0; i < size; i++)
    {
        // it print index of array element
        cout << i << " ";

        // it print the array element
        cout << arr[i] << "\n";
    }

    return 0;
}

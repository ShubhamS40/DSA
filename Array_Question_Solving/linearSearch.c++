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

int linearSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      cout << "the target " << target << " value index no is : " << i;
      break;
    }
  }
}

int main()
{
  int target, size = 5;
  int arr[size];

  // calling arrayinput function
  arrayInput(arr, size);

  cout << "search your target no index value with enter the target value";
  cin >> target;

  // search the target element index value
  linearSearch(arr, size, target);

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number  " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout<< " ";
        }

        // print star
        cout<<'*';
        

        

        if(i!=0){

         // space
          
        for (int j = 0; j < 2*i-1 ; j++)
        {
            cout<<" ";
        }
            cout<<"*";
        }
        
        cout<<endl;
    }
       
      // Bottom part of the diamond
    for (int i = 0; i < n - 1; i++) {
        // Print leading spaces
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }

        // Print first star
        cout << '*';

        // Print spaces between stars (for all rows except the last one)
        if (i != n - 2) {
            for (int j = 0; j < 2 * (n - i - 2) - 1; j++) {
                cout << " ";
            }
            // Print second star
            cout << '*';
        }

        cout << endl;
    }
    


    return 0;
}
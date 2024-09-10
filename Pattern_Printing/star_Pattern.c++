#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number  " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j < i+1 ; j++){
            cout << "*" ;
        }
        cout<<endl;
    }

// printing forward star pattern

   for(int i=0;i<n;i++){
       // spaces
          for(int j=0;j<i;j++){
            cout << " ";
          }
        for (int J = 0; J < n-i; J++)
        {
            cout << "*";
        }
          
      cout << endl;
   }

    return 0;
}
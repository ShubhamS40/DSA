#include<iostream>
using namespace std;


int main (){
    int n;
    cout<<"enter the value of n :";
    cin >> n;


        
        // top row
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
      cout<<endl;
        // middle row 
       for(int j=0;j<n-2;j++){
        cout<<"* ";
        for(int j=0;j<n;j++){
           cout << " ";
        }
        cout<< "*";
        cout<< endl;
       }

 // bottom row
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
      cout<<endl;

        
    


}
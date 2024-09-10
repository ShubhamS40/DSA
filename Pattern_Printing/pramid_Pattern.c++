#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number  " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spaces 
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " " ;
        }

        for(int j=0;j<i;j++){
            cout<<"*";
        }

        
         for(int j=0;j<i;j++){
            if(j!=0){

            cout<<"*";
            }
        }
        
        
        cout<<endl;
    }
    return 0;
}
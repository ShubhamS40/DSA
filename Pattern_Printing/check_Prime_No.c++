#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter your input number :",
    cin >> n;

    if(n%2!=0){
        cout<<"enter number is prime : "<< n << endl;
    }else{
        cout<<"enter number is not prime : "<< n << endl;
    }

    return 0;
}


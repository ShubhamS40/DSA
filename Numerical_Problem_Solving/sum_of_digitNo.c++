#include<iostream>
using namespace std;

int main(){
    cout<<"enter the digit";
    int n;
    cin>>n;
   int reminder=0;

     while(n !=0){
    reminder += n%10;
     n =n/10;
     }


  cout<< "the sum of digit no is "<< reminder;

   
  return 0;

}
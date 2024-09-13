// calculate the sum & product of all number in an array

#include<iostream>
using namespace std;

// it find the sum of all array element
int sumArrayyNo(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;

}

// it find the product of all array element
int productArrayNo(int arr[],int size){
    int product=1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    return product;

}


int main(){
    int size=5;
    int arr[size]={25,35,15,45,5};
    
    cout<<"the sum of all array element is : "<<sumArrayyNo(arr,size)<<endl;
    cout<<"the product of all array element is : "<<productArrayNo(arr,size)<<endl;

  return 0;
}
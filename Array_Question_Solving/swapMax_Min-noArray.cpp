#include<iostream>
using namespace std;


// that function is swap the min max value of array uisng array index value

int swap_Min_Max(int arr[],int size){
   
   int min_index=0;
   int max_index=0;

    for (int i = 0; i < size; i++)
    {
     if(arr[i]<arr[min_index]){
        min_index=i;
     }
     if(arr[i]>arr[min_index]){
        max_index=i;
     }
    }
    
    swap(arr[min_index],arr[max_index]);
     
}

int main(){
    int size=5;
    int arr[size]={15,5,25,36,45};

     swap_Min_Max(arr,size);
    
    // it loop print the swap value array
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
    
}


#include <iostream>
using namespace std;

int findIntersection(int arr1[],int arr2[],int arr[],int size,int &k){
  
   for (int i = 0; i < size; i++)
    {
       for (int j = 0; j < size; j++)
       {
         if(arr1[j]==arr2[i]){
             arr[k++]=arr1[j];
         }
       }
       
    }
    
}

int main(){
    int size=5;
int arr1[size]={1,2,3,4,5};
int arr2[size]={6,7,3,1,5};

// it was the third array that store the common value of the both two array
int arr[size];

int k=0;
 
 findIntersection(arr1,arr2,arr,size,k);



// its print the third array that store common value
   for (int i = 0; i < k; i++)
   {
     cout<<"[" <<arr[i]<<" ]";
   }

   return 0;
   

}
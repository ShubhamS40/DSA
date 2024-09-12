#include<iostream>
using namespace std;

int factrorail(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
       fact*=i;
    }
   return fact;
   
    
}

int main(){
    int n,r;
    cin>>n;
    cin>>r;

    int n1=factrorail(n);
    int r1=factrorail(r);
    int ncr=n-r;
   int nr= factrorail(ncr);

    int ans=n1/(r1*nr);
    cout<<ans;

 return 0;
}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{   int i=0, k=n-2,j=0;
    
    while(i<k){
        swap(arr[i],arr[k]);
        i++;
        k--;
    }
    int pos=n-1;
    while(j<=pos){
        swap(arr[j],arr[pos]);
        j++;
        pos--;
    }
    
}

int main(){
      int n;
      cout<<"Enter the number of elements";
      cin>>n;
      int arr[n];

      cout<<"Enter the elements"<<endl;
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

      rotate(arr,n);

}


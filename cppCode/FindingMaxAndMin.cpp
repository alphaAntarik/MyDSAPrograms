#include<iostream>
using namespace std;

int main(){
    int max, min, i,n;
    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"Enter the elements "<<endl;
    
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==0){
        cout<<"The maximum and the minimum element is "<<arr[0];
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        min=arr[1];
    }
    else{
        max = arr[1];
        min= arr[0];
    }

    for(i=2;i<n;i++){
        if(max<arr[i]){
            max=arr[i];

        }
        if(min>arr[i]){
            min=arr[i];
        }
    }

    cout<<"The maximum and the minimum elements are "<<max<<" and "<<min<<" respectively";



}
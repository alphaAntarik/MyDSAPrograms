//Write a C++ function to return minimum and maximum in an array. Your program should make the minimum number of comparisons.

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){

      for(int i = 1; i<=n-1;i++){
            int current = arr[i];
            int previous = i-1;

            while(previous>=0 && arr[previous] > current){
                  arr[previous+1]=arr[previous];
                  previous=previous-1;
            }
            arr[previous+1]=current;
      }
}

int main() {
      int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    insertion_sort(arr,arr_size);
    for(int i=0; i<arr_size; i++){
      cout<<arr[i]<<", ";

      
    }
    cout<<endl;

    cout<<"Max elements is "<<arr[0]<<" and min elements is "<<arr[arr_size-1]<<endl;
}
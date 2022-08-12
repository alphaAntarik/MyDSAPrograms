// Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

// Each student gets one packet.
// The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
// Examples:

// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and 
// we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum 
// difference between maximum and minimum packet 
// sizes.


#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int minDiff(int arr[], int n, int m){
      int min = 100000;
      sort(arr, arr+n);
      for(int i = 0; i+m<n;i++){
            if(arr[i+m-1]-arr[i]<min){
                  min = arr[i+m-1]-arr[i];
            }
            
      }
return min;
}

int main(){
      cout<<"Enter the number of students and number of chocolate packets "<<endl;
      int m,n;
      cin>>m;
      cin>>n;

      int arr[n];
      cout<<"enter the number of chocolates in each packet "<<endl;

      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

      
      cout<<"min difference is "<<minDiff(arr,n,m)<<endl;
}
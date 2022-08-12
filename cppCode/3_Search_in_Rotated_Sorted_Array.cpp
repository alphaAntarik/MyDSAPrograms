// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

#include<iostream>
using namespace std;

int search_the_key(int arr[], int n, int key){
      int low = 0;
      int high = n-1;
      while(low <= high){
            int mid = (low+high) / 2;
            if(arr[mid] ==key)
            return mid;
            if(arr[low]<arr[mid]){
             if(arr[low]<=key && arr[mid]>key){
                  high = mid-1;
            }
            else {
                  low = mid+1;
            }}
            else
           {
            if(arr[mid]<key && arr[high]>=key){
                  low = mid+1;

            }
            else{
                  high = mid -1;
            }
           }
      }
      return -1;
}

int main(){
      
      

      int arr[]={4,5,6,7,0,1,2};
      int n = sizeof(arr)/sizeof(int);
      int k;
      cout<<"enter the key "<<endl;
      cin>>k;
      if(search_the_key(arr,n,k)==-1){
            cout<<"element not found";
      }

      else{
            cout<<"element found in "<<search_the_key(arr,n,k);
      }
}
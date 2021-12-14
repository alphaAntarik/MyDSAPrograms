#include<iostream>
#include<array>
using namespace std;
int  MaxSumSubArray(int arr[],int n) {
            int maxSum = 0;
            int curSum = 0;
            for (int i = 1; i < n; i++) {
                  curSum = curSum + arr[i];
                  if (curSum > maxSum) {
                        maxSum = curSum;
                  }
                  if (curSum < 0) {
                        curSum = 0;
                  }
            }
            return maxSum;
      }
int main(){
    int x;
    cout<<"Enter the number of elements"<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"The maximum sum is "<<endl;
    
    cout<<MaxSumSubArray(arr,x);
    

}
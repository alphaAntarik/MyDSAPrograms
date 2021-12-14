#include<iostream>
using namespace std;

void selectionsort(int arr[], int n) {
        int i;
        for (int pos = 0; pos < n; pos++) {
           
            for (i = pos; i < n; i++) {
                if (arr[pos] > arr[i]) {
                    int temp = arr[pos];
                    arr[pos]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        }
int main(){
        int i, n;
        cout<<"Enter the number of elements ";
        
        cin>>n;
        int arr[n];
        cout<<"Enter the elements ";
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        selectionsort(arr, n);
        // cout<<"Sorted array "<<endl;
        // for(i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        int k;
        cout<<endl;
        cout<<"Enter the value of k";
        cin>>k;

        cout<<"The "<<k<<"th minimum element is "<<arr[k-1];

    }
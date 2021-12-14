#include<iostream>
using namespace std;
int main() {
        int i=0, j=0, k,n;
        cout<<"Enter the number of elements"<<endl;
       
        cin>>n;
        int arr[n];
        cout<<"Enter the elements(0,1 abd 2 only)"<<endl;
        for(int x=0;x<n;x++)
        cin>>arr[x];
        k=n-1;
        while(j<=k){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

                i++;
                j++;
                
            }
            else if(arr[j]==1){
               
                j++;
            }
            else if(arr[j]==2){
                int temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;

                k--;
                
            }
            
        }
        cout<<"Sorted elements are ";
        for(int a=0;a<n;a++)
        cout<<arr[a]<<" ";

    }

// Time complexity = O(n)
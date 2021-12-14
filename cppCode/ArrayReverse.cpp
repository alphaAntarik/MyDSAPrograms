#include<iostream>
#include<array>

using namespace std;

void reverse(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
         swap(arr[e],arr[s]);
         s+=1;
         e-=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
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

    cout<<"The elements are"<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"The reversed array "<<endl;
    reverse(arr,x);

}

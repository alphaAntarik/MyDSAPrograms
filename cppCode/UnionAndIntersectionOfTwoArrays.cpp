#include <iostream>
#include<iterator>
#include<set>
using namespace std;
int main() {
        int m, n;
        cout<<"Enter the numner of elements of the 1st and 2nd arrays respectively";
        
        cin>>m;
        cin>>n;
        cout<<"Enter the elements of the 1st array";
        int arr[m];
        for (int i = 0; i < m; i++)
            cin>>arr[i];
        cout<<"Enter the elements of the 2st array";
        int brr[n];

        for (int j = 0; j < n; j++)
            cin>>brr[j];
        cout<<"Union of the two arrays ";
        
        set<int, greater<int>> un;
        for (int i = 0; i < m; i++)
            un.insert(arr[i]);

            for (int j = 0; j < n; j++)
            un.insert(brr[j]);

        for (int ele : un)
            cout<<ele<<" ";

        cout<<"\nThe common elements are ";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i] == brr[j])
                    cout<<arr[i]<<" ";
            }
        }

    }

// c++ has "set" STL that stores only distinct elements.
// the syntax is --> set<datatype> setname;
//  STL belongs inside #include<set> header file. #include<iterator> file should also be called.
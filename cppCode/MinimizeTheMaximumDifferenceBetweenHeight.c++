#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
      int i;
      for (int pos = 0; pos < n; pos++)
      {

            for (i = pos; i < n; i++)
            {
                  if (arr[pos] > arr[i])
                  {
                        int temp = arr[pos];
                        arr[pos] = arr[i];
                        arr[i] = temp;
                  }
            }
      }
}

int MinimalDifference(int arr[], int n, int k)
{

      int maxEle = arr[n - 1];
      int minEle = arr[0];
      int result = arr[n - 1] - arr[0];
      for (int i = 0; i < n; i++)
      {
            if (arr[i] > k)
            {
                  maxEle = max(arr[i] + k , arr[n - 1] - k);
                  minEle = min(arr[0] + k , arr[i] - k);

                  result = min (maxEle - minEle , result);
            }
      }
      return result;
}

int main()
{
      int i, n;
      cout << "Enter the number of elements " << endl;

      cin >> n;
      int arr[n];
      cout << "Enter the elements ";
      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      selectionSort(arr, n);
      cout << "Modified array " << endl;
      for(int i = 0; i < n; i++)
      cout<<arr[i]<<" ";
      cout << "\nEnter the value of k ";
      int k;
      cin >> k;
      cout << "The difference between the largest and the smallest is " << MinimalDifference(arr, n, k);
}
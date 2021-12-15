import java.util.Arrays;

import java.util.Scanner;

public class MinimizeTheMaximumDifferenceBetweenHeightVVVIMP {
      void selectionSort(Integer arr[], int n) {
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
    
      int MinimalDifference(Integer arr[],int n,int k){
            
            int maxEle=arr[n-1];
        int minEle=arr[0];
        int result =arr[n-1]-arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                  maxEle=(arr[i]+k>arr[n-1]-k)?arr[i]+k:arr[n-1]-k;
                  minEle=(arr[0]+k<arr[i]-k)?arr[0]+k:arr[i]-k;
                  
                  result=(maxEle-minEle<result)?maxEle-minEle:result;
            }
        }
        return result;
      }
      
        public static void main(String[] args) {
            int i,n;
        System.out.println("Enter the number of elements ");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        Integer arr[] = new Integer[n];
        System.out.println("Enter the elements ");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        MinimizeTheMaximumDifferenceBetweenHeightVVVIMP ob = new MinimizeTheMaximumDifferenceBetweenHeightVVVIMP();
        ob.selectionSort(arr,n);
        System.out.println("Modified array "+ Arrays.asList(arr));
        System.out.println("Enter the value of k ");
        int k=sc.nextInt();
        System.out.println("The difference between the largest and the smallest is "+ ob.MinimalDifference(arr,n,k));
        }
}
        
      


import java.util.*;
public class MakeTheNegAndPosElementApart {
    // void selectionsort(Integer arr[], int n) {
    //     int i;
    //     for (int pos = 0; pos < n; pos++) {
           
    //         for (i = pos; i < n; i++) {
    //             if (arr[pos] > arr[i]) {
    //                 int temp = arr[pos];
    //                 arr[pos]=arr[i];
    //                 arr[i]=temp;
    //             }
    //         }
    //     }

    // }
    public static void main(String[] args) {
        int i=0, j=0, k;
        System.out.println("Enter the number of elements");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Integer arr[]= new Integer[n];
        System.out.println("Enter the elements(negative and positive elements)");
        for(int x=0;x<n;x++)
        arr[x]=sc.nextInt();
        k=n-1;
        while(j<=k){
            if(arr[j]<0){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

                i++;
                j++;
                
            }
            else if(arr[j]==0){
               
                j++;
            }
            else if(arr[j]>0){
                int temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;

                k--;
                
            }
            
        }
        // MakeTheNegAndPosElementApart ob = new MakeTheNegAndPosElementApart();
        // ob.selectionsort(arr, n);

        System.out.println("The sorted array "+Arrays.asList(arr));

    }
    
}
// here we are not using any sorting algo so that we can achive the minimum time complexity O(n). I we use any sorting algo, then the time complexity will be O(nlogn)

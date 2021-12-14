import java.util.*;
class SortThreeElementsInArrayWithoutSortingAlgo{
    

    public static void main(String[] args) {
        int i=0, j=0, k;
        System.out.println("Enter the number o0f elements");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Integer arr[]= new Integer[n];
        System.out.println("Enter the elements(0,1 and 2 only)");
        for(int x=0;x<n;x++)
        arr[x]=sc.nextInt();
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

        System.out.println("The sorted array "+Arrays.asList(arr));

    }
    
}
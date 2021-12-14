import java.util.*;

class FindingKthMiniElement {
    void selectionsort(Integer arr[], int n) {
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


    public static void main(String[] args) {
        int i, n;
        System.out.println("Enter the number of elements ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        Integer arr[] = new Integer[n];
        System.out.println("Enter the elements ");
        for (i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        FindingKthMiniElement ob=new FindingKthMiniElement();
        ob.selectionsort(arr, n);
        // System.out.println("Sorted array ");
        // System.out.println(Arrays.asList(arr));
        System.out.println("Enter the value of k");
        int k=sc.nextInt();
        System.out.println("The "+k +"th minimum element is "+arr[k-1]);

    }
}
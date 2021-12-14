import java.util.*;

class ArrayReverse{
    static void reverse(Integer arr[]){
        Collections.reverse(Arrays.asList(arr));
        System.out.println(Arrays.asList(arr));
    } 

    public static void main(String[]args){
        int x;
        System.out.println("Enter the number of elements ");
        Scanner sc= new Scanner(System.in);
        x= sc.nextInt();

        Integer arr[] = new Integer[x];
        System.out.println("Enter the elements ");
        for(int i=0;i<x;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Elements are ");
        System.out.println(Arrays.asList(arr));
        reverse(arr);
    }
}
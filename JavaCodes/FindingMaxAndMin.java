import java.util.Scanner;

class FindingMaxAndMin{
    public static void main(String[]args){
        int max,min, i,n;
        System.out.println("Enter the number of elements ");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        Integer arr[] = new Integer[n];
        System.out.println("Enter the elements ");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        if(n==0){
            System.out.println("The maximum and minimum element is "+arr[0]);
        }

        
            if(arr[0]>arr[1]){
                max=arr[0];
                min=arr[1];
            }
            else{
                max=arr[1];
                min=arr[0];
            }
        

        for(i=2;i<n;i++){
            if(max<arr[i]){
                max=arr[i];

            }
            if(min>arr[i]){
                min=arr[i];

            }
        }
        System.out.println("The maximum and the minimum elements are "+max +" and "+ min+" respectively");



    }

}
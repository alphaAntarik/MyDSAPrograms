import java.util.*;

class MaxSumSubArrayVVVIMP {
      static int MaxSumSubArray(Integer[] arr) {
            int maxSum = 0;
            int curSum = 0;
            for (int i = 1; i < arr.length; i++) {
                  curSum = curSum + arr[i];
                  if (curSum > maxSum) {
                        maxSum = curSum;
                  }
                  if (curSum < 0) {
                        curSum = 0;
                  }
            }
            return maxSum;
      }

      public static void main(String[] args) {
            int x;
            System.out.println("Enter the number of elements ");
            Scanner sc = new Scanner(System.in);
            x = sc.nextInt();

            Integer arr[] = new Integer[x];
            System.out.println("Enter the elements ");
            for (int i = 0; i < x; i++) {
                  arr[i] = sc.nextInt();
            }
            System.out.println("Maximum sum is " + MaxSumSubArrayVVVIMP.MaxSumSubArray(arr));

      }
}

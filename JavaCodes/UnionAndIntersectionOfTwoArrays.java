import java.util.*;

public class UnionAndIntersectionOfTwoArrays {
    public static void main(String[] args) {
        int m, n;
        System.out.println("Enter the numner of elements of the 1st and 2nd arrays respectively");
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        n = sc.nextInt();
        System.out.println("Enter the elements of the 1st array");
        Integer arr[] = new Integer[m];
        for (int i = 0; i < m; i++)
            arr[i] = sc.nextInt();
        System.out.println("Enter the elements of the 2st array");
        Integer brr[] = new Integer[n];

        for (int j = 0; j < n; j++)
            brr[j] = sc.nextInt();
        System.out.println("Union of the two arrays ");

        Set<Integer> un = new HashSet<>();
        for (int i = 0; i < m; i++)
            un.add(arr[i]);
        for (int j = 0; j < n; j++)
            un.add(brr[j]);

        for (int ele : un)
            System.out.print(ele + " ");

        System.out.println("\nThe common elements are ");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i] == brr[j])
                    System.out.print(arr[i] + " ");
            }
        }

    }
}

// java has "Set" data structure that stores only distinct elements.
// the syntax is --> Set<data_type> un = new HashSet<>();
package Arrays;

public class D1_SecondLargest {
    public static void main(String[] args) {
       int[] arr1 = {12, 35, 1, 10, 34, 1};
       int[] arr2 = {10, 5, 10};
       int[] arr3 = {3, 3, 3, 3};
       System.out.println(getSecondLargest(arr1));
       System.out.println(getSecondLargest(arr2));
       System.out.println(getSecondLargest(arr3));
    }
    public static int getSecondLargest(int[] arr) {
        int largest = arr[0];
        int secondLargest = -1;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
}

package Arrays;

import java.util.Arrays;

public class D3_ReverseArray {
    public static void main(String[] args) {
        int[] arr1 = {1, 4, 3, 2, 6, 5};
        int[] arr2 = {4, 5, 2};
        int[] arr3 = {1};

        reverseArray(arr1);
        reverseArray(arr2);
        reverseArray(arr3);

        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        System.out.println(Arrays.toString(arr3));
    }
    public static void reverseArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            swap(arr, start, end);
            start++;
            end--;
        }
    }
    public static void swap(int[] arr, int start, int end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

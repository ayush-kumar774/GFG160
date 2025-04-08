package Arrays;

import java.util.Arrays;

public class D5_NextPermutation {
    public static void main(String[] args) {
        int[] arr1 = {2, 4, 1, 7, 5, 0};
        int[] arr2 = {3, 2, 1};
        int[] arr3 = {3, 4, 2, 5, 1};

        nextPermutation(arr1);
        nextPermutation(arr2);
        nextPermutation(arr3);

        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        System.out.println(Arrays.toString(arr3));
    }
    public static void nextPermutation(int[] arr) {
        int n = arr.length;
        int i = n - 2;

        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }

        if (i >= 0) {
            int j = n - 1;
            while (arr[j] <= arr[i]) {
                j--;
            }
            D3_ReverseArray.swap(arr, i, j);
        }

        reverse(arr, i + 1, n - 1);
    }

    private static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            D3_ReverseArray.swap(arr, start++, end--);
        }
    }

}

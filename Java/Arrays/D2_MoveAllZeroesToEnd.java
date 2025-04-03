package Arrays;

import java.util.Arrays;


public class D2_MoveAllZeroesToEnd {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 0, 4, 3, 0, 5, 0};
        int[] arr2 = {10, 20, 30};
        int[] arr3 = {0, 0};

        pushZeroesToEnd(arr1);
        pushZeroesToEnd(arr2);
        pushZeroesToEnd(arr3);

        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        System.out.println(Arrays.toString(arr3));
    }
    public static void pushZeroesToEnd(int[] arr) {
        int left = 0, right = arr.length - 1;

        while (left < right) {
            while (left < right && arr[right] == 0) {
                right--;
            }

            if (arr[left] == 0) {
                swap(arr, left, right);
                right--;
            }
            left++;
        }
//        int nonZeroIndex = 0;
//
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] != 0) {
//                swap(arr, i, nonZeroIndex);
//                nonZeroIndex++;
//            }
//        }
    }

    private static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

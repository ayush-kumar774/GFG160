package Arrays;

public class D13_SmallestPositiveMissing {
    public static void main(String[] args) {
        int[] arr1 = {2, -3, 4, 1, 1, 7};
        int[] arr2 = {1, 2, 3, 4, 5};
        int[] arr3 = {-5, -2, -1};

        System.out.println(missingNumber(arr1)); 
        System.out.println(missingNumber(arr2)); 
        System.out.println(missingNumber(arr3)); 
    }

    public static int missingNumber(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                // Swap arr[i] with arr[arr[i] - 1]
                int temp = arr[i];
                arr[i] = arr[temp - 1];
                arr[temp - 1] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
}

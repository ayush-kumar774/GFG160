package Arrays;

public class D10_KadaneAlgorithm {
    public static void main(String[] args) {
        int[] arr1 = {2, 3, -8, 7, -1, 2, 3};
        int[] arr2 = {-2, -4};
        int[] arr3 = {5, 4, 1, 7, 8};

        System.out.println(maxSubarraySum(arr1));
        System.out.println(maxSubarraySum(arr2));
        System.out.println(maxSubarraySum(arr3));
    }
    // Kadane's Algorithm
    public static int maxSubarraySum(int[] nums) {
        if (nums.length == 0) {
            return -1;
        }
        int maxSum = nums[0];
        int runningSum = nums[0];

        for (int i = 1; i < nums.length ; i++) {
            runningSum = Math.max(nums[i], runningSum + nums[i]);
            maxSum = Math.max(maxSum, runningSum);
        }
        return maxSum;
    }
}

package Arrays;

public class D12_MaxCircularSubarraySum {
    public static void main(String[] args) {
        int[] arr1 = {8, -8, 9, -9, 10, -11, 12};
        int[] arr2 = {10, -3, -4, 7, 6, 5, -4, -1};
        int[] arr3 = {-1, 40, -14, 7, 6, 5, -4, -1};

        System.out.println(circularSubarraySum(arr1)); 
        System.out.println(circularSubarraySum(arr2)); 
        System.out.println(circularSubarraySum(arr3)); 
    }
    public static int circularSubarraySum(int[] nums) {
        int totalSum = 0 ;
        int maxKadane = kadane(nums);
        int minSum = 0;
        int currMin = 0;

        for (int num : nums) {
            totalSum += num;

            currMin = Math.min(num, currMin + num);
            minSum = Math.min(minSum, currMin);
        }

        if (maxKadane < 0) {
            return maxKadane;
        }

        return Math.max(maxKadane, totalSum - minSum);
    }

    public static int kadane(int[] nums) {
        int maxEndingHere = nums[0];
        int maxSoFar = nums[0];

        for (int i = 1; i < nums.length; i++) {
            maxEndingHere = Math.max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
        }
        return maxSoFar;
    }

}

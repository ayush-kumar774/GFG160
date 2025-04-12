package Arrays;

public class D11_MaximumProductSubArray {
    public static void main(String[] args) {
        int[] arr1 = {-2, 6, -3, -10, 0, 2};
        int[] arr2 = {1, -3, -10, 0, 6};
        int[] arr3 = {2, 3, 4};

        System.out.println(maxProduct(arr1));
        System.out.println(maxProduct(arr2));
        System.out.println(maxProduct(arr3));
    }
    public static int maxProduct(int[] nums) {
        if (nums.length == 0) {
            return -1;
        }
        int maxProduct = nums[0];
        int runningMaxProduct = nums[0];
        int runningMinProduct = nums[0];

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < 0) {
                int temp = runningMaxProduct;
                runningMaxProduct = runningMinProduct;
                runningMinProduct = temp;
            }

            runningMaxProduct = Math.max(nums[i], runningMaxProduct * nums[i]);
            runningMinProduct = Math.min(nums[i], runningMinProduct * nums[i]);

            maxProduct = Math.max(maxProduct, runningMaxProduct);
        }

        return maxProduct;
    }

}

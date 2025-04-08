package Arrays;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class D6_MajorityElementII {
    public static void main(String[] args) {
        int[] arr1 = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
        int[] arr2 = {1, 2, 3, 4, 5};
        System.out.println(findMajority(arr1));
        System.out.println(findMajority(arr2));
    }
    public static List<Integer> findMajority(int[] nums) {
        int n = nums.length;

        int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            }
            else if (num == candidate2) {
                count2++;
            }
            else if (count1 == 0) {
                candidate1 = num;
                count1++;
            }
            else if (count2 == 0) {
                candidate2 = num;
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }

        count1 = count2 = 0;

        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            }
            else if (num == candidate2) {
                count2++;
            }
        }

        List<Integer> result = new ArrayList<>();
        if (count1 > n / 3) result.add(candidate1);
        if (count2 > n / 3) result.add(candidate2);

        Collections.sort(result);
        return result;
    }
}

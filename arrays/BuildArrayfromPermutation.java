import java.util.Arrays;

public class BuildArrayfromPermutation {
    public static void main(String[] args) {
        int[] nums = {0,2,1,5,3,4};
        BuildArrayfromPermutation arr = new BuildArrayfromPermutation();
        // int[] ans = arr.buildArrayUsingforloop(nums);
        int[] ans = arr.buildArrayUsingrecursion(nums);
        System.out.println(Arrays.toString(ans));
    }

    int[] buildArrayUsingrecursion(int[] nums) {
        int i = 0;
        int[] ans = new int[nums.length];
        ans = arrayans(i, ans, nums);
        return ans;
    }

    int[] arrayans(int index, int[] array, int[] numarr) {
        if(index == numarr.length) {
            return array;
        }
        array[index] = numarr[numarr[index]];
        return arrayans(index+1, array, numarr);
    }

    int[] buildArrayUsingforloop(int[] nums) {
        int[] ans = new int[nums.length];
        for(int i = 0; i<nums.length; i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
}
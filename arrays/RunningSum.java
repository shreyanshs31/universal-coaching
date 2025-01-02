import java.util.Arrays;

public class RunningSum {
    public static void main(String[] args) {
        RunningSum a = new RunningSum();
        int[] nums = {1,2,3,4};
        int[] ans = a.runningSum(nums);
        System.out.println(Arrays.toString(ans));
    }
    public int[] runningSum(int[] nums) {
        int[] rSum =  new int[nums.length];
        int sum =  0;
        int i = 0;
        return Sum(nums, rSum, sum, i);

    }
    int[] Sum(int[] nums, int[] rSum, int sum, int i){
        if(i == nums.length){
            return rSum;
        }
        sum += nums[i];
        rSum[i] = sum;
        i++;
        return Sum(nums, rSum, sum, i);
    }
}

import java.util.Arrays;

public class GetConcatenation {
    public static void main(String[] args) {
        GetConcatenation a = new GetConcatenation();
        int[] nums = {1,2,1};
        int[] ans = a.getConcatenation(nums);
        System.out.println(Arrays.toString(ans));

    }
    int[] getConcatenation(int[] nums) {
        int len = nums.length*2;
        int[] ans = new int[len];
        int index = 0;
        int count = 0;
        return concatenated(ans, nums, index, count);
    }
    int[] concatenated(int[] ans, int[] nums, int index, int count) {
        if(count == ans.length){
            return ans;
        }
        if(index == nums.length) {
            index = 0;
        }
        ans[count] = nums[index];
        return concatenated(ans, nums, index + 1, count+1);
    }

}

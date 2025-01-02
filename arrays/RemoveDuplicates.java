
public class RemoveDuplicates {
    public static void main(String[] args) {
        RemoveDuplicates a = new RemoveDuplicates();
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        int ans = a.removeDuplicates(nums);
        System.out.println(ans);
    }
    public int removeDuplicates(int[] nums) {
        int k = 1;
        int i = 0; 
        return k = expectedArray(nums, k, i);
    }
    int expectedArray(int[] nums, int k, int i){
        if(k == nums.length){
            return i+1;
        }
        else if(nums[i] == nums[k]) {
            k++;
        }
        else if(nums[i] != nums[k]) {
            i++;
            nums[i] = nums[k];
        }
        return expectedArray(nums, k, i);
    }
}

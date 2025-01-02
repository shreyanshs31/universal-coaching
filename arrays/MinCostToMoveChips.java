public class MinCostToMoveChips {
    public static void main(String[] args) {
        MinCostToMoveChips a = new MinCostToMoveChips();
        int[] nums = {1,2,3};
        a.minCostToMoveChips(nums);
    }
    public int minCostToMoveChips(int[] position){
        int i = 0;
        int j = 0;
        int count = 0;
        return counting(i, j, count, position);
    }
    int counting(int odd, int even , int count, int[] position) {
        if (count == position.length) {
            if(odd<even) {
                return odd;
            }
            else if(even<odd) {
                return even;
            }
            return odd;
        }
        else if (position[count]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
        return counting(odd, even, count+1, position);
    }

}

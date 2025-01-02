public class PlusOne{
    public static void main(String[] args) {
        int[] arr = {1,2,3};
        int sum = 0;
        for(int i = 0; i<3;i++) {
            sum = sum*10 +arr[i];
        }
        System.out.println(sum);
    }
}
package Java;

public class BinarySearch {
    static int binary_search(int arr[], int x) {
        int low = 0, high = arr.length - 1;
        while(low<=high) {
            int mid = (low + high)/2;
            if (arr[mid] == x) {
                return mid;
            }
            if(arr[mid] < x){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
        int x;
        x = 25; //item to be searched
        int res = binary_search(arr, x);

        if(res == -1){
            System.out.println("Element is not present in the given array.");
        } else {
            System.out.println(" Element found at index : " + res);
        }

    }
}

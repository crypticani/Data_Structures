import java.util.*;

public class BinarySearch {

    private static int binarySearch(int arr[], int key){
        int left = 0, right = arr.length - 1;

        while(left <= right){
            int mid = (left + right) / 2; 

            if(arr[mid] == key) return mid;

            if(arr[mid] < key) 
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return -1;
    }

    public static void main(String[] args) {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int arr[] = Stream.of(br.readLine().replaceAll("\\s+", " ").split(" ")).mapToInt(Integer::new).toArray();

        int key = Integer.parseInt(br.readLine());

        int index = binarySearch(arr, key);

        if(index != -1)
            System.out.println("Element found at index " + index);
        else
            System.out.println("Element not found");
    }
}

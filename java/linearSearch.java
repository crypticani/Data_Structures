import java.util.*;

public class LinearSearch {

	private static int linearSearch(int arr[], int key){
		
		for(int i = 0; i < arr.length;; i++)
			if(a[i] == key)
				return i;
        
		return -1;
	}
	
	public static void main(String[] args) {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int arr[] = Stream.of(br.readLine().replaceAll("\\s+", " ").split(" ")).mapToInt(Integer::new).toArray();
		
		int key = Integer.parseInt(br.readLine());
			
		int index = linearSearch(arr, key);
		
		if(index != -1)
			System.out.println("Element found at index " + index);
		else
			System.out.println("Element not found");
	}
}

package sorting;

import java.io.*;
import java.util.stream.Stream;

public class MergeSort {

	private static void partition(int[] a, int l, int r) {
		if (l >= r) return;
    
		int mid = (l + r) / 2;
		partition(a, l, mid);
		partition(a, mid + 1, r);
		merge(a, l, mid, r);
	}

	private static void merge(int[] a, int l, int mid, int r) {
		int temp[] = new int[r - l + 1];
		int k = 0, i = l, j = mid + 1;

		while (i <= mid && j <= r)
			temp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];

		while (i <= mid)
			temp[k++] = a[i++];
		while (j <= r)
			temp[k++] = a[j++];

		for (int t = l; t <= r; t++)
			a[t] = temp[t - l];
	}

	public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] arr = Stream.of(br.readLine().replaceAll("\\s+", " ").split(" ")).mapToInt(Integer::parseInt).toArray();
		partition(arr, 0, arr.length - 1);
		System.out.println(Arrays.toString(arr));
	}
}

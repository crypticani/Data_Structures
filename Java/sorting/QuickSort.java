package sorting;

import java.io.*;
import java.util.stream.Stream;

public class QuickSort {

  private static void qSort(int a[], int left, int right) {
    if (left < right) {

      int p = partition(a, left, right);

      qSort(a, left, p - 1);
      qSort(a, p + 1, right);
    }
  }

  private static int partition(int[] a, int l, int r) {
    int pivot = l;

    while (l <= r) {
    while (l <= r && a[l] <= a[pivot])
      l++;
    while (a[r] > a[pivot])
      r--;
    if (l < r)
      swap(a, l, r);
  }
  swap(a, pivot, r);
  return r;
}

  private static swap(int a, int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }

  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int[] arr = Stream.of(br.readLine().replaceAll("\\s+", " ").split(" ")).mapToInt(Integer :: parseInt).toArray();
    qSort(arr, 0, arr.length - 1);
    System.out.println(Arrays.toString(arr));
  }
}

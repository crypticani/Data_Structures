// Quick sort in C language

#include<stdio.h>
#include<stdlib.h>

void quick_sort(int * array, int start_index, int end_index) {
    if(start_index>=end_index) {
	return;
    }
    int i, j, num, pivot_index=end_index;
    for(i=end_index-1; i>=start_index; i--) {
	if(array[i]>array[pivot_index]) {
	    num=array[i];
	    for(j=i; j<pivot_index; j++) {
		array[j]=array[j+1];
	    }
	    array[j]=num;
	    pivot_index--;
	}
    }
    quick_sort(array, start_index, pivot_index-1);
    quick_sort(array, pivot_index+1, end_index);
}

int main(void) {
    int i, num, n=10, array[n];
    printf("Size: %d\n", n);
    printf("Insert %d elements into the array:\n", n);
    for(i=0; i<n; i++) {
	scanf("%d", &num);
	array[i]=(int)num;
    }
    quick_sort(array, 0, n-1);
    printf("\nSorted arrey:\n");
    for(i=0; i<n; i++) {
	printf("%d\n", array[i]);
    }
    return EXIT_SUCCESS;
}

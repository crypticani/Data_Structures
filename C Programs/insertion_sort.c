#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int * array, size_t n) {
    if(n>1) {
	int current_element;
	for(size_t i=1; i<n; i++) {
	    current_element=array[i];
	    size_t j=i-1;
	    while(j>=0 && array[j]>current_element) {
		array[j+1]=array[j];
		j--;
	    }
	    array[j+1]=current_element;
	}
    }
}

int main(void) {
    size_t i, n=10;
    printf("Size: %lu \n", n);
    int array[10];
    printf("Insert %lu elements into the array:\n", n);
    for(i=0; i<n; i++) {
	scanf("%d", &array[i]);
    }
    insertion_sort(array, n);
    printf("\nSorted array:\n");
    for(i=0; i<n; i++) {
	printf("%d\n", array[i]);
    }
    return EXIT_SUCCESS;
}

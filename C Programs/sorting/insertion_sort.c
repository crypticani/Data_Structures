// Insertion sort in C
// contributed by nishant-08

#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i, j, num, n=10, array[10], current_element;
    printf("Size: %d\n", n);
    printf("Insert %d elements into the array:\n", n);
    for(i=0; i<n; i++) {
	scanf("%d", &num);
	array[i]=(int)num;
    }
    if(n>1) {
	for(i=1; i<n; i++) {
	    current_element=array[i];
	    j=i-1;
	    while(j>=0 && array[j]>current_element) {
		array[j+1]=array[j];
		j--;
	    }
	    array[j+1]=current_element;
	}
    }
    printf("\nSorted arrey:\n");
    for(i=0; i<n; i++) {
	printf("%d\n", array[i]);
    }
    return 0;
}

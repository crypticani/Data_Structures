// Program to generate the Fibonacci Series using Array

#include<stdio.h>

int main()
{
    int n,i;
    int a[49];

    printf(" A program to print fibonacci series.\n");
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    // assigning first two elements of array as 0 and 1
    a[0]=0; 
    a[1]=1;
    printf("\n%d %d ",a[0],a[1]);
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2]; // main logic of the fibonacci series
        printf("%d ",a[i]);
    }
}
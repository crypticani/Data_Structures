//Program to demonstrate the use of dynamic memory allocation using malloc ()

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n,i,sum=0;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //dynamic allocation
    ptr=(int*)malloc(n*sizeof(int));
    //error msg if memory allocation fails
    if(ptr==NULL)
    {
        printf("\nError! memory not allocated.");
        exit(0);
    }
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i); //calculate the sum of the entered numbers
    }
    printf("\nSum=%d",sum);
    return(0);
}
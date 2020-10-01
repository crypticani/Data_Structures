// Program to sort the element of an array using Bubble sort technique

#include<stdio.h>

int main()
{
    int a[15],i,j,n,temp;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered numbers are:\n");
    for(i=0;i<n;i++) //getting the inputs using for loop
    {
        printf("%d ",a[i]);
    }
    printf("\n\nAfter sorting:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]) //checking the number if it is greater or not
            {
                //swapping the required numbers
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }      
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
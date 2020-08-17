// Program to sort the element of an array using Selection sort technique

#include<stdio.h>

int s_sort();
int s[15],n,i,j,min,temp;

int main()
{
    printf("A program of Selection sorting.\n\nEnter the number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }

    printf("\n\nEntered numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
    s_sort(); //calling the required function
    printf("\nAfter sorting:\n");
    printf("The numbers are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
return(0);
}

int s_sort() //function for the selection sort
{
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(s[j]<s[min]) //comparing the numbers
            {
                min=j;
            }
        }
        //swapping the numbers
        temp=s[i];
        s[i]=s[min];
        s[min]=temp;
    }
}
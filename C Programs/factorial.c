//Program to find Factorial of a Number
#include<stdio.h>

int fact();
int main()
{
    int n;

    printf("Enter any number to get its factorial:\n");
    scanf("%d",&n);
    printf("The factorial of %d is = %d",n,fact(n));
    return(0);
}

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
//Program to swap two number using Function

#include<stdio.h>

void swap1();
void swap2();
int n,a,b,c;

int main()
{
    printf("\t\tProgram for swapping :\n\nEnter your choice:\n1.Swap using a third variable.\n2.Swap without third variable.\n\n");
    scanf("%d",&n);
    switch(n){
        case 1: swap1();
        break;
        case 2: swap2();
        break;
        default:
    printf("Please enter correct option.");
    }
    return 0;
}

void swap1()
{
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nThe value of a=%d\tand the value of b=%d\t before swapping.",a,b);
    c=a;
    printf("\nc=%d",c);
    a=b;
    printf("\na=%d",a);
    b=c;
    printf("\nb=%d",b);
    printf("\nThe value of a=%d\tand the value of b=%d\t after swapping",a,b);
}

void swap2()
{
    printf("\nEnter the value of a:");scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nThe value of a=%d\tand the value of b=%d\t before swapping.",a,b);
    a=a+b;
    printf("\na=%d",a);
    b=a-b;
    printf("\nb=%d",b);
    a=a-b;
    printf("\na=%d",a);
    printf("\nThe value of a=%d\tand the value of b=%d\t after swapping.",a,b);
}
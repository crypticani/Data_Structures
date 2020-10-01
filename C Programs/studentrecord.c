//Program to enter and display the record of n number of students using Structure

#include<stdio.h>

struct student //declaring structure
{
    char name[16];
    int roll;
}p[2];

int main()
{
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    printf("\nEnter the details of Students:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Name and Roll no. of the student %d:\n",i+1);
        scanf("%s %d",p[i].name,&p[i].roll);
    }
    printf("\nDetails of Students:");
    //using loop to fetch all the records
    for(i=0;i<n;i++)
    {
        printf("\nName: %s\tRoll no.: %d",p[i].name,p[i].roll);
    }
}
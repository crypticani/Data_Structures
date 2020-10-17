#include<stdlib.h>
#include<stdio.h>
#define MAX 10
struct stack
{
int items[MAX];
int top;
};
void push(struct stack*, int);
int pop(struct stack*);
void list(struct stack*);
void main()
{
struct stack s;
int c=1, ch, n;
s.top=-1;
while(c)
{
printf("main menu");
printf("\n 1. Push the element");
printf("\n 2. Pop the element");
printf("\n 3. List all element");
printf("\n 4. Exit");
printf("\n Enter your choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter any number:");
scanf("%d", &n);
push(&s, n);
break;
case 2:
n= pop(&s);
printf("Deleted number=%d", n);
break;
case 3:
list(&s);
break;
case 4:
exit(0);
default:
printf("Invalid choice");
}
}
}
void push(struct stack *s, int x)
{
if(s->top==MAX-1)
{
printf("overflow");
return;
}
s->items[++(s->top)]=x;
}
int pop(struct stack*s)
{
if (s->top==-1)
{
printf("Underflow");
return-1;
}
return(s->items[s->top--]);
}
void list(struct stack *s)
{
int t;
if(s->top==-1)
{
printf("Empty");
return;
}
for(t=s->top;t>0;t--)
printf("%d",s->items[t]);
}

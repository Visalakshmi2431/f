#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,fact=1;
clrscr();
printf("Enter a number to calculate its factorial:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("factorial of %d is %d\n",n,fact);
getch();
return 0;
}

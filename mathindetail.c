#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
     printf("Enter the 1st number = ");
     scanf("%d",&a);
     printf("Enter the 2nd number = ");
     scanf("%d",&b);
     sum=a+b;
     sub=a-b;
     mul=a*b;
     div=a/b;
     printf("Sum is %d\nsub is %d\nmul is %d\ndiv is %d",sum,sub,mul,div);
     return 0;
}


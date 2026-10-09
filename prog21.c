#include<stdio.h>
int main() 
{
int num,sum=0;
printf("Enter the term: ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
    { 
    sum=sum+i;//0+1,1+2,3+3,6+4
     }
printf("%d",sum);
return 0; }

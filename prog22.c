#include<stdio.h>
int main() {
int num,sum=0;
printf("Enter the term: ");
scanf("%d",&num);
for(int i=2;i<=num;i++) 
    {
      if(i%2==0) 
      {
         sum=sum+i; } 
         } 
printf("%d",sum); return 0; }
     			

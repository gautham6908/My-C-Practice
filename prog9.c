#include<stdio.h>
int main(){
int a,b;
printf("Enter the Values for A and B: ");// 10,5
scanf("%d %d",&a,&b);
a=a+b;//a=10;= 10+5=15=a
b=a-b;//b=5;= 15-5=10=b
a=a-b;//a=15;= 15-10=5=a
printf("%d %d",a,b); 
return 0; 
}

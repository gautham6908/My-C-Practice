/*#include<stdio.h>
int main() 
{ 
int a;
scanf("%d",&a);
if(a%2==0) { 
          printf("even"); 
        } 
         else { 
                printf("odd"); 
              } 
         return 0; 
  } */
#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b); 
return 0; 
}
/*#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
{
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/


 
  

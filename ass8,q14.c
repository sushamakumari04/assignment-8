#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
 for(j=1;j<=5;j++)
 {
   if(j<=i)
   {
     if(j==1||j==i||i==5)
     {
      printf(" * ");
     }
     else
     {
        printf("   ");
     }
   }
   else
   {
    printf("   ");
   }
 }
printf("\n");
}


return 0;
}

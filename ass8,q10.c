#include<stdio.h>
int main()
{
int count;
for(int i=1;i<=4;i++)
{
   count=1;
  for(int j=1;j<=7;j++)
  {
    if(j<=5-i||j>=3+i)
    {
     printf("%d",count);
     j<4?count++:count--;
    }
    else
    {
     printf(" ");
     if(j==4)
        count--;
    }
  }
 printf("\n");
}
return 0;
}

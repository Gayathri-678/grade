#include<stdio.h>
int main()
{
printf("enter the marks  :");
int marks=0;
scanf("%d",&marks);
if (marks<=100 && marks>84)
{
printf("grade a");
}
else if (marks<85 && marks>69)
{
printf("grade b");
}
else if (marks<70 && marks>54)
{
printf("garde c");
}
else if (marks<55 && marks>39)
{
printf("grade d");
}
else if (marks<40 && marks>0)
 {
    printf("grade f");
  }
}

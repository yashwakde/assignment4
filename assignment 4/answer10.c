#include<stdio.h>
int main()
{
  int i,y;
  printf("enter a number\n");
  scanf("%d",&y);
  for (i=1;i<=10;i++)
  {
    printf("%dx%d=%d\n",y,i,y*i);
  }
  return 0;
}
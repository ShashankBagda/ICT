#include<stdio.h>

int main()
{
  int i,j;
  printf("0\n");
  for(i=9;i>=1;i--)
  {
    for(j=i;j<=9;j++)
      printf("%d",j);
    printf("0");
    for(j=9;j>=i;j--)
      printf("%d",j);
    printf("\n");
  }
  return 0;
}

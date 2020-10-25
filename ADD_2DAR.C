#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][3]={{1,2,3},{4,5,6}};
 int b[2][3]={{4,5,6},{7,8,9}};
 int c[2][3];
 int i,j;
 clrscr();
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=2;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
 printf("Display array\n");
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=2;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
 getch();
}
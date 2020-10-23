#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={11,1,22,3,4};
  int i,j,temp;
  clrscr();
  for(i=0;i<=3;i++)
  {
   for(j=0;j<=3-i;j++)
   {
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;

	}

   }


  }
  for(i=0;i<5;i++)
  {

    printf(" ascending order:%d",a[i]);
  }
 getch();
}
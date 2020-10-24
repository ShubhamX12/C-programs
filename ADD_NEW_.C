#include<stdio.h>
#include<conio.h>
#define max 50
void main()
{
	int a[max];
	int i,j,k,n;
	clrscr();
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);

	}
	printf("\n Enter postion where new element is added");
	scanf("%d",&k);
	printf("\nEnter the new element add in array");
	scanf("%d",&j);
	a[k]=j;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);

	}


  getch();
}
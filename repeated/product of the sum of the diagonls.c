#include < stdio.h >
#include < conio.h > 
void main()
{
	int a[10][10],i,j,sum=0,r,c;
	clrscr();
	printf("\n Enter the number of rows and column ");
	scanf("%d%d",&r,&c);
	printf("\nEnter the %dX%d matrix",r,c);
	for(i=0;i < r;i++)
	{
		for(j=0;j < c;j++)
		{
			scanf("%d",&a[i][j]);
		}//for
	}//for
	for(i=0;i < r;i++)
	{
		for(j=0;j < c;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}//for
	}//for
	printf("\nThe sum of diagonal elements is %d",sum);
}//main

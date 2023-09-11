
#include<stdio.h>
int main()
{
int i,n=7,j;
for(i=0;i<n;i++)
{
	for(j=0;j < n-1-i;j--)
	{
          printf("* ");
}
printf("\n");
}
}

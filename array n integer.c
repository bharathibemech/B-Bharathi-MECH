#include <stdio.h>
int main(void)
{
	int k,a[100],min,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<k;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
	// your code goes here
	return 0;
}

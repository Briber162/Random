#include<stdio.h>
int main()
{
	int d,m,i,a[100];
	int count=0,j,sum=0,n;
	printf("Enter the number of squares\n");
	scanf("%d",&n);
	printf("Enter the number on the suares\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter d and m\n");
	scanf("%d%d",&d,&m);//d is Sum, m is number of items
	i=0;
	while(i<n)
	{	
		sum=0;
		printf("ENTERED WHILE LOOP\n");
		for(j=i;j<m;j++)
		{
			sum+=a[j];
		}
		if(sum==d)
		{
			printf("Count is incremented\n");
			count++;
			i++;
			m++;
		}
		else{
			printf("NO INCREMENT\n");
			i++;
			m++;
		}
	
	}	
	printf("COUNT: %d",count);
	return 0;
}

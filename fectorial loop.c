#include<stdio.h>

main()

{
	int a=1,fect=1,n;
	printf("Enter Number=");
	scanf("%d",&n);
	while(n>=a)
	{
		fect=fect*n;
		n--;
	}
	printf("sum=%d",fect);
}

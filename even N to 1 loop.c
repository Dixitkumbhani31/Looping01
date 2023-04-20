#include<stdio.h>

main()

{
	int n,a=1;
	printf("Enter Number=");
	scanf("%d",&n);
	
	while(n>=a)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n--;
	}
}

#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("enter subjects in mat,phy,che...\n:");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35)
	{
		if(phy>=35)		
		{
			if(che>=35)
				printf("passed");
			else
				printf("failed");
		}
		else
			printf("failed");
	}		
	else
		printf("failed");	
	return 0;
}

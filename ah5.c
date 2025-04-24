#include<stdio.h>
int main()
{
	int pp,sp;
	printf("enter purchase price:");
	scanf("%i",&pp);
	printf("enter selling price");
	scanf("%i",&sp);
	if(pp==sp)
		printf("no profit no loss");
	else
	{
		if(sp>pp)
			printf("profit of %i",sp-pp);		
		else
			printf("loss of %i",pp-sp);	
	}	
	return 0;
}

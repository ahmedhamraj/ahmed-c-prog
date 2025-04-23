#include<stdio.h>
int main()
{
	int age;
	printf("enter yout age:");
	scanf("%i",&age);
	if(age>=60)
		printf("senior adult\n");
	else if(age>=40)
		printf("middle aged adult\n");
	else if(age>=20)
	 printf("young adult\n");
	else if(age>=13)
	printf("adolscent\n");
	else if(age>=5)
		printf("child\n");
	else if(age>=2)
		printf("toddler\n");
	else
		printf("infant\n");
	return 0;
}


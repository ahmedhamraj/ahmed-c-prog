#include<stdio.h>
int main()
{
	int n,fi,sec,th,total;
	printf("enter the 3 digit natural number:\n");
	scanf("%i",&n);
	th=n%10;
	n=n/10;
	sec=n%10;
	n=n/10;
	fi=n%10;
	total=fi+sec+th;
	printf("sum of 3 digit number %i",total);
	return 0;	
}

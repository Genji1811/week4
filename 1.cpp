#include<stdio.h>

int main()
{		
	double miles, kms;
	printf("nhap so kms:");
	scanf("%lf",&kms);
	miles=1000*kms;
	printf("do dai %f miles",miles);
	return 0 ;
}

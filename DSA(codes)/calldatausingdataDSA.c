#include<stdio.h>
struct car {
	char engin[10];
	char fueltype[10];
	int fuelcap;
	int seatingcap;
	int citymileage;
};
int main()
{
	int i,n;
	scanf("%d",&n);
	struct car c[100];
	for(i=0;i<100;i++)
	{
		printf("enter car %d infom \n",i+1);
		scanf("%s",&c[i].engin);
		scanf("%s",&c[i].fueltype);
		scanf("%d",&c[i].fuelcap);
		scanf("%d",&c[i].seatingcap);
		scanf("%d",&c[i].citymileage);				
	}
	return 0;
}

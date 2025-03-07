#include<stdio.h>
void merg(int A[],int a,int b,int c )
{
	int l;
	int i=a;
	int j=b+1;
	int k=0;
	int B[c];
	while(i<b && j<c)
	{
		if(A[i]<=A[j])
		{
			B[k]=A[i];
			i++;
			k++;
		}
		else
		{
			B[k]=A[j];
			j++;
			k++;
		}	
	}
	while(i<=b)
	{
		B[k]=A[i];
		i++;
		k++;
	}
	while(j<=c)
	{
		B[k]=A[j];
		j++;
		k++;
	}
	for(l=0;l<c;l++)
	{
		printf("%d ",B[l]);
	}
}
int main()
{
	int C[]={31,47,91,144,258,7,19,21,33,44,57,100};  
	merg(C,0,4,12);
	return 0;
}

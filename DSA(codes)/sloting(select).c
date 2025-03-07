	#include<stdio.h>
void mnx(int x[],int n)
{
	int i,j;
	for( i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(x[j]<x[j+1]){
				int temp =x[j+1];
				x[j+1] = x[j];
				x[j] = temp;
			}
		}
	}
}
int main(){
	 int n,i,j;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	mnx(x,n);
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return 0;
}

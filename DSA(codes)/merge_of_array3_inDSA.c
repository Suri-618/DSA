#include<stdio.h>
void merge(int A[], int B[],int m, int n) 
{
    int res[m+n];
    int i=0,j=0,k=0;
    while(i<m&&j<n) 
    {
        if(A[i]<=B[j]) 
        {
            res[k]=A[i];
            i++;
            k++;
        } 
        else 
        {
            res[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<m) 
    {
        res[k]=A[i];
        i++;
        k++;
    }
    while(j<n) 
    {
        res[k]=B[j];
        j++;
        k++;
    }
    int z;
	for(z=0;z<m+n;z++){
    	printf("%d ",res[z]);
	}
}
int main()
{
	int m,n;
	int A[]={11,24,41,52,146};
	int B[]={45,87,5,56,69,39};
	merge(A,B,5,6);
	return 0;
}


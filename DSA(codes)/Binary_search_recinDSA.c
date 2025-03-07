#include<stdio.h>
 int Binary_search_rec(int A[], int low, int high, int key)
 {
	if(low>high)
	{
	 return -1;
	}
	else
	{
	  int mid =(low+high)/2;
	  if(A[mid]==key)
	  {
	   return mid;
	  }
	  else if(A[mid]>key)
	  {
	   return Binary_search_rec(A,low,mid-1,key);
}
	   else
	   {
	    return Binary_search_rec(A,mid+1,high,key);
	   }
	  }
	}
 int main()
{
	int n,i,low,high,key;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++) 
	{
	scanf("%d",&A[i]);	
	}
	scanf("%d",&key);
	int res=Binary_search_rec(A,0,n,key);
	if(res==-1)
	{
		printf("%d is not found",key);
	 } 
	else
	{
		printf("%d is found %d",key,res);
	 } 
	return 0;
    }

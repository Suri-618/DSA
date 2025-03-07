#include<stdio.h>
 struct animal{
 	 char name[10];
 	 int age;
 };
 void sort (struct animal A[])
 { 
 int i,j;
 int n=sizeof(A)/sizeof(int);
 for(i=0;i<n-1;i++)
 {
 	for(j=0;j<n-i-1;j++)
 	{
 		if(A[j].age>A[j+1].age)
 		{
 			struct animal temp =A[j];
 			A[j]=A[j+1];
 			A[j+1]=temp;
		 }
	 }
 }
}
 int main() 
 {
 	int i;
 	struct animal A[2]={{"Surendra",18},{"Rohit",17}};
	 sort(A);
	 for(i=0;i<2;i++)
	 {
	 		 printf("%s %d ",A[i].name,A[i].age);
	 }

	 return 0;
 }


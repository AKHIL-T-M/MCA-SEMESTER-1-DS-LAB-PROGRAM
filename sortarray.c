#include<stdio.h>
int arr1[10],arr2[10],mergedarray[20],temp,i,j,k,size1,size2;
int main()
{
	//entering the array
	printf("Enter the array1 size:");
	scanf("%d",&size1);
	printf("Enter the array element:\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("The entere array is:");
	for(i=0;i<size1;i++)
	{
	printf("%d ",arr1[i]);
	}
	for(i=0;i<size1;i++)
	{
		for(j=i+1;j<size1;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	printf("the sorted array1 is:");
	for(i=0;i<size1;i++)
	{
		printf("%d",arr1[i]);
	}
}
	

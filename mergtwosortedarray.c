#include<stdio.h>
int arr1[10],arr2[10],mergedarray[20],i,j,k,size1,size2;
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
	printf("Enter the arr2 size: ");
	scanf("%d",&size2);
	printf("Enter the array element:");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("the entered arr2:");
	for(i=0;i<size2;i++)
	{
		printf("%d ",arr2[i]);
	}
	i=0;
	j=0;
	k=0;
	while(i<size1 && j<size2)
	{
		if(arr1[i]<arr2[j])
		{
			mergedarray[k]=arr1[i];
			i++;
		}
		else
		{
			mergedarray[k]=arr2[j];
			j++;
		}
		k++;
	}

	while(i<size1)
	{
		mergedarray[k]=arr1[i];
		i++;
		k++;
	}
	while(j<size2)
	{
		mergedarray[k]=arr2[j];
		j++;
		k++;
	}
	printf("\nThe merged array is:");
	for(k=0;k<size1+size2;k++)
	{
		printf("%d ",mergedarray[k]);
	}
}
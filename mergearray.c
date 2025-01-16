#include<stdio.h>
int s1=5,s2=5,s3,arr1[5],arr2[5],arr3[10],i,j,k;
void main()
{
	printf("\nenter the elements into 1st array :");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nTHE ARRAY IS : ");
	for(i=0;i<s1;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("\nenter the elements into the 2nd array :");
	for(j=0;j<s2;j++)
	{
		scanf("%d",&arr2[j]);
	}
	printf("\nTHE ARRAY IS : ");
	for(j=0;j<s1;j++)
	{
		printf("%d",arr2[j]);
	}
	s3 = s1 + s2;
	j=0;
	for(i=0;i<s3;i++)
	{
		if(i<s1)
		{
			arr3[i]=arr1[j];
			j++;
		}
		else
		{
			arr3[i]=arr2[k];
			k++;
		}
	}
	printf("\nThe merged array is:");
	for(k=0;k<s3;k++)
	{
		printf("%d",arr3[k]);
	}

}
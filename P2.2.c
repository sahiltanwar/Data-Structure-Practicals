#include<stdio.h>
int main()
{
	int temp;
	int n;
	printf("Enter number of elements of sorted array : ");
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("\n\tEnter the element %d : ", i+1);	
		scanf("%d", &a[i]);
	}

	printf("\nBefore Sorting : ");
	for(int i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}

	//SORTING IN ASCENDING ORDER

	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nAfter Sorting : ");
    	for(int i=0; i<n; i++)
	{
	        printf("%d ",a[i]);
	}
	printf("\n");
}


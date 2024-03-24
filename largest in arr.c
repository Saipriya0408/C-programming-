#include<stdio.h>
int findlargestelement(int arr[],int size)
{
	int max=arr[0];
	for (int i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[]={56,72,89,96};
	int size=sizeof(arr)/sizeof(arr[0]);
	int largest=findlargestelement(arr,size);
	printf("the largest num is array is %d",largest);
}
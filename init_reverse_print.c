#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}

void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	print(arr,sz);
	printf("\n");
	
	reverse(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	init(arr,sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}
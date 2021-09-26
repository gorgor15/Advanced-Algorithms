#include <stdio.h>
int main(void){
int arr[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
int n = sizeof(arr) / sizeof(arr[0]);
int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0) {
		arr[k] = arr[i];
		k = k + 1;
		}
	}
	for (int i = k; i < n; i++)
		arr[i] = 0;
	
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
		
}
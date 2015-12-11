// RecursiveBinarySearch.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){
	int mid;
	if (first > last)
		return -1;

	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return BSearchRecur(ar, first, mid - 1, target);
	else
		return BSearchRecur(ar, mid + 1, last, target);
}


int main(void){
	int arr[] = { 1, 2, 3, 4, 5 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1){
		printf("Å½»ö ½ÇÆÐ \n");
	}
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 3);
	if (idx == -1){
		printf("Å½»ö ½ÇÆÐ \n");
	}
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);


	
}
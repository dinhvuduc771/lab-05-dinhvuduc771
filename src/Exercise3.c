/*
3. Median of a sorted array:
-	If the number of elements is odd, the median is the middle element
-	If the number of elements is even, the median is the average of the two middle elements
Given two sorted arrays, find the median of them. 
Ex:
 ___________________________________________________________________________________________
| Input: 4 1 2 5 8 6 0 3 4 6 7 9                                                            |
|  where 4 is the number of 1st array's elements, [1 2 5 8] is the 1st sorted array,        |
|        6 is the number of 2nd array's elements, [0 3 4 6 7 9] is the 2nd sorted array     |
| Output: Median is 1.5                                                                     |
|___________________________________________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int m, int arr1[], int n, int arr2[]){
	//Your codes here
	
	int id1, id2;
	float mid;
	int arr[m+n];
	for (int i=0;i<m+n;i++)
	{
		if(i>=0 && i<m)
		arr[i]=arr1[i];
		else
		arr[i]=arr2[i-m];
	}

if((m+n)%2==0)
{
	id1=(m+n)/2;
	id2=id1--;
	float mid=((float) arr[id1]+(float) arr[id2])/2;
printf("%.2f",mid);
}	

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int length_of_1st_array = atoi(argv[1]);
	int length_of_2nd_array = atoi(argv[length_of_1st_array + 2]);
	int arr1[length_of_1st_array], arr2[length_of_2nd_array], i;
	for(i=0; i<length_of_1st_array;i++){
		arr1[i] = atoi(argv[i+2]);
	}

	for(i=0; i<length_of_2nd_array;i++){
		arr2[i] = atoi(argv[i + length_of_1st_array + 3]);
	}

	Ex3(length_of_1st_array, arr1, length_of_2nd_array, arr2);
	
	return 0;
}

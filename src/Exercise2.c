/*
2.	Receive an array of all distinguished integers, return indices of the two numbers
such that they add up to a specific target.
Ex:
 ___________________________________________
| Input:  2 7 11 15(array) 9(target)        |
| Output: [0 1]                             |
|___________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n, int target){
	//Your codes here
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int target = atoi(argv[argc]);
	argc--;
	int testcase[argc], i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}

	Ex2(testcase, argc, target);
	
	return 0;
}

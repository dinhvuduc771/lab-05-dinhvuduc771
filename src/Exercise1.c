/*
1.	Receive a string, find the length of the longest substring without repeating characters.
Ex:
 ____________________________________
| Input:  abcabcbb                   |
| Output: 3                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int Ex1(char str[]){
	//Your codes here

    int length[50], count = 0, len = strlen(str);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[j] == str[i])
            {
                length[count] = j - i;
                count++;
                break;
            }    
        }        
    }
    
    int max = length[0];
  
    for (int i = 0; i < count; i++)
    {
        if (length[i] > max)
            max = length[i];
    }
    
    
 
return max ;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	printf("%d",Ex1(testcase));
	return 0;
}

/*
4. Given an integer, convert it to a roman number.
Input must be within the range from 1 to 3999.
Ex:
 ____________________________________
| Input: 3456                        |
| Output: MMMCDLVI                   |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ex4(int n){
	//Your codes here
	{ 

    while(n != 0)
    {

        if (n >= 1000)       
        {
           printf("M");
           n -= 1000;
        }

        else if (n >= 900)   
        {
           printf("CM");
           n -= 900;
        }        

        else if (n >= 500)   
        {           
           printf("D");
           n -= 500;
        }

        else if (n >= 400)   
        {
           printf("CD");
           n -= 400;
        }

        else if (n >= 100)   
        {
           printf("C");
           n -= 100;                       
        }

        else if (n >= 90)    
        {
           printf("XC");
           n -= 90;                                              
        }

        else if (n >= 50)    
        {
           printf("L");
           n -= 50;                                                                     
        }

        else if (n >= 40)    
        {
           printf("XL");           
           n -= 40;
        }

        else if (n >= 10)    
        {
           printf("X");
           n -= 10;           
        }

        else if (n >= 9)     
        {
           printf("IX");
           n -= 9;                         
        }

        else if (n >= 5)     
        {
           printf("V");
           n -= 5;                                     
		}

        else if (n >= 4)     
        {
           printf("IV");
           n -= 4;                                                            
        }

        else if (n >= 1)     
        {
           printf("I");
           n -= 1;                                                                                   
        }

    }

    return ;
}
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex4(testcase);
	return 0;
}
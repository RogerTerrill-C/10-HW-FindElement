// ============================================================================
// file: findelem.c
// ============================================================================
// Programmer: Roger Chicas-Terrill
// Date: 10/04/2016
// Class: CSCI 223 ("C Language for Mathematics and Science")
// Time: TR 04:30am
// Instructor: Mr. Edwards
// Project: Random_Guess
//
// Description:
//      This program checks an array for a target number and returns pointer value. 
// ============================================================================
#include <stdio.h>
#define SIZE 6

//Function prototype
int findelem(int *array, int numElem, int target);

// ==== main ==================================================================
//
// ============================================================================
int main(void)
{
	auto int myArray[SIZE] = {5, 4, 3, 1, 14, 55};
	printf("%d\n", findelem(myArray, SIZE, 55));
	
	return 0;
}

 // end of "main"
 
 
// ==== findelem ===============================================================
//
// This function confirms if an array is symetrical.
//
// Input:
//      array[], numElems, target: Respectively the name of the array, the number of
//		elements in array and the target int to find.
// Output:
//      Returns pointer value of target if found with index as well.
//
// ============================================================================

int findelem(int *array, int numElem, int target)
{
	auto int *arrEnd = array + numElem;
	auto int *pFront;
	
	for(pFront = array; pFront < arrEnd; pFront++)
	{
		if(*pFront == target)
		{
			printf("Found target: %d at array[%d]\n", target, (int)(pFront-array));
			return *pFront;
		}
	}
	printf("None Found\n");
	return NULL;
}

// end of "findelem"
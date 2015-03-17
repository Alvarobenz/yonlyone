#include <iostream>

using namespace std;

int main()
{	// Start of function

	/* Selection Sort */

	int array [5] = {1, 9, 3, 2, 5};
	int i, j, min, temp;

	cout << "Unsorted Array:" << endl;

	/* Pre-Sorted Array */
	for(int i = 0; i < 5; i++)
	{
		cout << array[i];
		cout << " ";
	}

	cout << endl;

	/* Selection Sort */
	for (int i = 0; i < 4; i++)
	{

		min = i; // Sets the min index to be the first index of our sub array

		/* 	We start j at i+1 because we want to compare the
		 * 	the first index, i, to the next index i+1. "j" in
		 * 	this case, acts as our incrementer so that we can
		 * 	compare our min index to every other number in our
		 * 	sub array that isn't sorted yet.
		 */
		for(int j = i+1; j < 5; j++)
		{
			/*	If the index "j" of the array is smaller than
			 * 	the current index "min" of the array, then we
			 * 	store the new min index that our incrementer
			 * 	"j" found.
			 */
			if(array[j] < array[min])
			{
				min = j;
			}
		}

		//
		if(min != j)
		{
			/* Swap Algorithm */

			temp = array[i];		// Store current value index "i" in a temp variable.
			array[i] = array[min];	// Store the min value in index "i" of the array
			array[min] = temp;		// Store our temp value into array[min]
		}
	}

	cout << "Sorted Array:" << endl;

	/* Post-Sorted Array */
	for(int i = 0; i < 5; i++)
	{
		cout << array[i];
		cout << " ";
	}
}

#include <iostream>

using namespace std;

int main()
{	// Start of function

	int array [5] = {1, 9, 3, 2, 5};
	int i, j, key;

	cout << "Unsorted Array:" << endl;

	/* Pre-Sorted Array */
	for(int i = 0; i < 5; i++)
	{
		cout << array[i];
		cout << " ";
	}

	cout << endl;

	/* Insertion Sort */
	for(int i = 1; i < 5; i++)
	{
		key = array[i];
		j = i - 1;
		while(j > 0 && array[j] > key)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;
	}

	cout << "Sorted Array:" << endl;

	/* Post-Sorted Array */
	for(int i = 0; i < 5; i++)
	{
		cout << array[i];
		cout << " ";
	}
} // End of Function

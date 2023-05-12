#include <cs50.h>
#include <stdio.h>

int get_size(void);
void calc_PowerOf2(int array[], int n);
void print_PowerOf2(int array[], int n);

int main(void)
{
	// Prompt user for a size and save it into a variable n.
	// The number should be a positive integer number
	int n = get_size();

	// Create an array with n elements (n is the size which we asked from the user)
	int array[n];

	// Create a function to calculate each element of the array
	calc_PowerOf2(array, n);

	// Print the array, integer by integer
	print_PowerOf2(array, n);
}

// Get user input
int get_size(void)
{
	int n = 0;

	do
	{
		n = get_int("Give size: ");	
	} while (n <= 0);
	
	return n;
}

// Calculate each array element
void calc_PowerOf2(int array[], int n)
{
	array[0] = 1;

	for (int i = 1; i < n; i++)
	{
		// Calculate current element twice as previous 
		array[i] = array[i-1] * 2;	
	}
}

// Print array
void print_PowerOf2(int array[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("array[%i]=%i\n", i, array[i]);
	}
}
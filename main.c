// Include the standard input/output library
#include <stdio.h>

int main()
{
    // Variable to store the size of the table
    unsigned int size;

    // Read and store the size of the table
    printf("Enter the size of the multiplication table: ");
    scanf("%u", &size);

    // Declaring 2D array to store the values of the table
    int table_values[size][size];

    printf("\n");
    // Loop to generate rows
    for (int row = 0; row < size; row++)
    {
        // Loop to generate columns
        for (int column = 0; column < size; column++)
        {
            // Store the value of the multiplication in the array
            table_values[row][column] = (row + 1) * (column + 1);
            printf("%3d ", table_values[row][column]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

/* 
Parampreet Singh
paramps
Problem 4a, MSCS Module 1, Fall2023
09/26/2023
Aim: To print a triangle of a's of height n, where n is input by the user.
*/

#include <stdio.h>

int main(){

    // Declaring variables
    int num_rows;

    // Printing program description
    printf("This program will print a right triangle of 'a' characters.\nThe characters will appear in the lower left of the diagonal.\n");

    // Taking input from user and ensuring it is between 1 and 80
    do{
        printf("Enter the number of rows (1-80): ");
        scanf("%d", &num_rows);
    } while (num_rows < 1 || num_rows > 80);

    // Printing the triangle using loop nesting
    for (int i = 1; i <= num_rows; i++){

        // Printing a's in each row equal to the row number to get a right triangle
        for (int j = 1; j <= i; j++){
            printf("a");
        }
        
        // Printing a new line after each row
        printf("\n");
    }
    
    return 0;
}
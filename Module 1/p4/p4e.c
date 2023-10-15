/* 
Parampreet Singh
paramps
Problem 4e, MSCS Module 1, Fall2023
09/26/2023
Aim: To print a square of n rows that appears to be composed of 4 triangles (a, b, c and d),
     and a center '*', where n is odd and input by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argsv[]){

    // Declaring variables
    int num_rows;
    int mid_row;

    // if required argument is not provided, exit the loop
    if(args < 2){
        fprintf(stderr, "usage: ./p4e num_rows \n       num_rows is odd in range 1..79 \n");
        exit(0);
    }

    // Converting argument string to integer using atoi and assigning to num_rows
    num_rows = atoi(argsv[1]); 

    // Checking if input is in range and exiting with stderr message if not
    if (((num_rows < 1) || (num_rows > 79)) || (num_rows % 2 == 0)){
        fprintf(stderr, "usage: ./p4e num_rows \n       num_rows is odd in range 1..79 \n");
        exit(0);
    }

    // Calculating the middle row
    mid_row = num_rows / 2;

    // Printing the right triangle using loop nesting
    for (int i = 0; i < num_rows; i++){

        /* Printing spaces equal to the row number to get a right triangle 
        filling the upper right diagonal with b's */
        for (int j = 0; j < num_rows; j++){

            // Printing a's in the upper left diagonal
            if (i < mid_row){
                if (j < i + 1){
                    printf("a ");
                }
                else if (j < num_rows - i - 1){
                    printf("b ");
                }
                else{
                    printf("d ");
                }
            }
            else if (i == mid_row){
                if (j < mid_row){
                    printf("a ");
                }
                else if (j == mid_row){
                    printf("* ");
                }
                else{
                    printf("d ");
                }
            }
            else{
                if (j < num_rows - i){
                    printf("a ");
                }
                else if (j < i){
                    printf("c ");
                }
                else{
                    printf("d ");
                }
            }
            
        }
        
        // Printing a new line after each row
        printf("\n");
    } 

    return 0;
}
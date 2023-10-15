/* 
Parampreet Singh
paramps
Problem 4d, MSCS Module 1, Fall2023
09/26/2023
Aim: To print a right triangle of d's of height n filling the lower right diagonal, where n is input by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argsv[]){

    // Declaring variables
    int num_rows;

    // if required argument is not provided, exit the loop
    if(args < 2){
        fprintf(stderr, "usage: ./p4d num_rows \n       num_rows in range 1..80 \n");
        exit(0);
    }

    // Converting argument string to integer using atoi and assigning to num_rows
    num_rows = atoi(argsv[1]); 

    // Checking if input is in range and exiting with stderr message if not
    if ((num_rows < 1) || (num_rows > 80)){
        fprintf(stderr, "usage: ./p4d num_rows \n       num_rows in range 1..80 \n");
        exit(0);
    }

    // Printing the right triangle using loop nesting
    for (int i = 0; i < num_rows; i++){

        // Used if else to print spaces in uper right diagonal and d's in lower right diagonal
        for (int j = num_rows - 1; j >= 0; j--){
            if (j > i){
                printf(" ");
            }
            else{
                printf("d");
            }
        }
        
        // Printing a new line after each row
        printf("\n");
    } 

    return 0;
}
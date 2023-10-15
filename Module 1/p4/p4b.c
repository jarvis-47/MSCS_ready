/* 
Parampreet Singh
paramps
Problem 4b, MSCS Module 1, Fall2023
09/26/2023
Aim: To print a right triangle of b's of height n filling the upper right diagonal, where n is input by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argsv[]){

    // Declaring variables
    int num_rows;

    // if required argument is not provided, exit the loop
    if(args < 2){
        fprintf(stderr, "usage: ./p4b num_rows \n       num_rows in range 1..80 \n");
        exit(0);
    }
    
    num_rows = atoi(argsv[1]);

    // Checking if input is in range and exiting with stderr message if not
    if((num_rows < 1) || (num_rows > 80)){
        fprintf(stderr, "usage: ./p4b num_rows \n       num_rows in range 1..80 \n");
        exit(0);
    }

    // Printing the right triangle using loop nesting
    for (int i = 0; i < num_rows; i++){

        // Printing spaces equal to the row number to get a right triangle filling the upper right diagonal with b's
        for (int j = 0; j < num_rows; j++){
            if (j < i){
                printf(" ");
            }
            else{
                printf("b");
            }
        }
        
        // Printing a new line after each row
        printf("\n");
    } 

    return 0;
}
/*
 * Parampreet Singh
 * Username: paramps
 * CPSC 6810 - MSCS Ready, Mod 1, Fall 2023
 * Project 3: Dichotomous Key: Tree Identification
 * Date: 9/23/2023
 * Aim: An interactive code which helps in identifying broadleaf trees with alternating leaves in Georgia based on further characteristics as selected by users.
 */

#include <stdio.h>
#include <string.h>

int main(){

    char UserInput;  // Variable to store user input

    // Print the introduction
    printf("Assume we are trying to identify a tree found in Georgia, based\non characteristics of the leaves. We already know that it is a\nbroadleaf tree with leaves that are alternating\n\n");

    // Ask the user to answer the questions
    printf("Answer the questions below to determine the type of tree.\nAre the leaves:\n");
    printf("a) lobed?\nb) not lobed?\n");
    
    // Store the user input
    scanf("%c", &UserInput);

    // Based on the user input, ask the next question
    if (strcmp(&UserInput,"a") == 0){
        
        // Ask the user to answer the next question
        printf("Are the leaves:\n");
        printf("a) rounded?\nb) pointed?\n");
        
        // Store the user input
        scanf(" %c", &UserInput);

        // Based on the user input, print the result
        if (strcmp(&UserInput,"a") == 0){
            printf("It is a SASSAFRAS tree.\n");            
        }
        else {
            printf("It is a TULIP-POPLAR tree.\n");
        }

    }
    // If the user input is not "a", ask the next question
    else {
	    printf("Are the leaves:\n");
        printf("a) smooth?\nb) jagged?\n");
        scanf(" %c", &UserInput);

        // Based on the user input, ask the next question
        if (strcmp(&UserInput,"a") == 0){
            printf("Are the leaves:\n");   
            printf("a) heart-shaped?\nb) oval?\n");  

            // Store the user input
            scanf(" %c", &UserInput);

            // Based on the user input, print the result
            if (strcmp(&UserInput,"a") == 0){
                printf("It is an EASTERN REDBUD tree.\n");        
            }
            else {
                printf("It is a MAGNOLIA tree.\n");
            }
        }

        // If the user input is not "a", ask the next question
        else {
            printf("Are the leaves:\n");   
            printf("a) dark green, leathery, with spines?\nb) yellow green or green, and not leathery with spines?\n");  

            // Store the user input
            scanf(" %c", &UserInput);

            // Based on the user input, print the result
            if (strcmp(&UserInput,"a") == 0){
                printf("It is an AMERICAN HOLLY tree\n");        
            }
            else {
                printf("It is an AMERICAN BEECH tree\n");
            }
        }
    }
    return(0);
}


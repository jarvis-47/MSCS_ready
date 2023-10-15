/*
 * Project: Custom Mosiac Tile
 * Aim: - Understand the process of editing, compiling and executing a C program
 * 	- Experience with declaring variables
 * 	- Excercise ability to use scanf and printf functions
 * Date Created: 09/04/2023
 * By: Parampreet Singh (C19377466)
 */

#include <stdio.h>

int main(){
	int red;              // Declared int variable to record red component
	int green;            // Declared int variable to record green component  
	int blue;             // Declared int variable to record blue component

	char color_code;      // Declared a single character for color code 
	char color_name[20];  // Declared string supporting up to 19 characters for color name
	
	// Print statements in the required format
	printf("Tiger Town Custom Mosaic Tile\n");
	printf("*****************************\n");
	
	printf("\nPlease enter the specifications for your custom tile\n");
	// Prompt for color name, then read it using scanf
	printf("single word color name: ");
	scanf("%s", color_name);
	
	// Prompt for color code, then read it using scanf
	printf("single character code for the color: ");
	scanf(" %c", &color_code);
	
	// Take input from user for the RGB values of the custom color tile
	// Use %d with scanf for int type inputs
	printf("\nSpecify the color using RGB values (0-255)\n");

	// Prompt for red component, then read it using scanf
	printf("red component: ");
	scanf("%d", &red);

	// Prompt for green component, then read it using scanf
	printf("green component: ");
	scanf("%d", &green);
	
	// Prompt for blue component, then read it using scanf
	printf("blue component: ");
	scanf("%d", &blue);
	
	// Display the final custom color tile  specifications
	printf("\nConfirming:\ncolor name: %s\ncolor code: %c\nRGB: (%d,%d,%d)\n", color_name, color_code, red, green, blue);

	return 0;   // Return Statement for main function
}

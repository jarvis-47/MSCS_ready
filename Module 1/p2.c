/*
 * Parampreet Singh
 * Project 2: Color Matcher
 * MSCS Ready, Module 1, Fall 2023
 * 09/14/2023
 * Finding a minimum value using arethemetic operations from math.h library and using if else statements.
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

/*
 * This program accepts a color definition from the user and then
 * returns the closest match from a predefined palette of colors.
 * We use a simple calculation of color distance, the Euclidean
 * distance between the colors (and acknowledge that this is not the best
 * fit for human perception).
 * That is, the distance between two colors is calculated as the square
 * root of the sum of the squares of the differences between the red,
 * green and blue values of the two colors.
 */

int main(){

	/*
	 * A palette of 8 colors is defined below.
	 * Each color has a name and appropriate R, G, and B values
	 */
	char black[20]="black"; 
	int black_R = 5; int black_G = 5; int black_B = 5;

	char white[20]="white"; 
	int white_R = 250; int white_G = 247; int white_B = 248;

	char red[20]="red"; 
	int red_R = 237; int red_G = 9; int red_B = 32; 

	char yellow[20]="yellow"; 
	int yellow_R = 233; int yellow_G = 237; int yellow_B = 9;

	char blue[20]="blue"; 
	int blue_R = 23; int blue_G = 91; int blue_B = 209;

	char orange[20]="orange"; 
	int orange_R = 247; int orange_G = 134; int orange_B = 5;

	char green[20]="green"; 
	int green_R = 59; int green_G = 171; int green_B = 7; 

	char purple[20]="purple"; 
	int purple_R = 135; int purple_G = 13; int purple_B = 217;

	/*
	 * TODO: create variables to keep track of
	 * the color that the user enters
	 */
	int input_R, input_G, input_B;

	/*
	 * TODO: create variables to keep track of
	 * the closest match thus far in the palette of colors
	 */
	int closest_R, closest_G, closest_B;

	/*
	 * TODO: create variables to keep track of distance values:
	 * 1) distance from user's color to closest match thus far
	 * 2) distance from user's color to color currently being considered
	 * 3) any temporary variables you use in performing the distance calc
	 */
	float dist_closest, dist_current;
	char color_closest[20];

	/* 
	 * TODO:
	 * prompt user for color values for their color
	 * read values in
	 * input format should be (red_value, blue_val, green_val)
	 * echo values back out
	 */
	printf("Enter RGB values for your new color using the format (R,G,B): ");
	scanf("(%d,%d,%d)", &input_R, &input_G, &input_B);

	/* 
	 * TODO:
	 * distance between user's color and first color in palette.
	 * Report the distance.
	 * Set this color as the currently closest color.
	 * Report that this is currently the closest color.
	 * Output as seen in sample output file.
	 */
	dist_closest = sqrt(pow((input_R - black_R), 2) + pow((input_G - black_G), 2) + pow((input_B - black_B), 2));
	printf("Closest color is initially black, with distance %5.2f. \n", dist_closest);
	closest_R = black_R;
	closest_G = black_G;
	closest_B = black_B;
	strcpy(color_closest ,black);


	/* 
	 * TODO:
	 * For each remaining color in the palette, compute and report the
	 * distance to the user's color.
	 * Check if it is closer than currently closest color.
	 * If so, make that color the closest color; report accordingly.
	 * Output as seen in sample output file.
	 */

	// WHITE
	
	dist_current = sqrt(pow((input_R - white_R), 2) + pow((input_G - white_G), 2) + pow((input_B - white_B), 2)); // euclidean distance
	
	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,white);
		closest_R = white_R;
		closest_G = white_G;
		closest_B = white_B;
		printf("Distance to white is %5.2f; closest color is now %s. \n", dist_closest, color_closest);
	}
	else {
		printf("Distance to white is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	// RED
	dist_current = sqrt(pow((input_R - red_R), 2) + pow((input_G - red_G), 2) + pow((input_B - red_B), 2)); // euclidean distance
	
	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,red);
		closest_R = red_R;
		closest_G = red_G;
		closest_B = red_B;
		printf("Distance to red is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to red is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}


	// YELLOW
	dist_current = sqrt(pow((input_R - yellow_R), 2) + pow((input_G - yellow_G), 2) + pow((input_B - yellow_B), 2)); // euclidean distance
	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,yellow);
		closest_R = yellow_R;
		closest_G = yellow_G;
		closest_B = yellow_B;
		printf("Distance to yellow is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to yellow is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	// BLUE
	dist_current = sqrt(pow((input_R - blue_R), 2) + pow((input_G - blue_G), 2) + pow((input_B - blue_B), 2)); // euclidean distance

	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,blue);
		closest_R = blue_R;
		closest_G = blue_G;
		closest_B = blue_B;
		printf("Distance to blue is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to blue is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	// ORANGE
	dist_current = sqrt(pow((input_R - orange_R), 2) + pow((input_G - orange_G), 2) + pow((input_B - orange_B), 2)); // euclidean distance
	
	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,orange);
		closest_R = orange_R;
		closest_G = orange_G;
		closest_B = orange_B;
		printf("Distance to orange is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to orange is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	// GREEN
	dist_current = sqrt(pow((input_R - green_R), 2) + pow((input_G - green_G), 2) + pow((input_B - green_B), 2)); // euclidean distance

	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,green);
		closest_R = green_R;
		closest_G = green_G;
		closest_B = green_B;
		printf("Distance to green is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to green is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	// PURPLE
	dist_current = sqrt(pow((input_R - purple_R), 2) + pow((input_G - purple_G), 2) + pow((input_B - purple_B), 2)); // euclidean distance

	// condition to check if the current distance is less than the closest distance
	if (dist_current < dist_closest) {
		dist_closest = dist_current;
		strcpy(color_closest ,purple);
		closest_R = purple_R;
		closest_G = purple_G;
		closest_B = purple_B;
		printf("Distance to purple is %5.2f; closest color is now %s.\n", dist_closest, color_closest);
	}
	else {
		printf("Distance to purple is %5.2f; closest color is still %s. \n", dist_current, color_closest);
	}

	/* 
	 * TODO:
	 * Report the closest match found in the palette.
	 * Output as seen in sample output file.
	 */
	printf("The closest match found in the palette was: %s with (%d, %d, %d) \n\n", color_closest, closest_R, closest_G, closest_B);

	return(0);

}

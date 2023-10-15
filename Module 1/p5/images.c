/*
Parampreet Singh
paramps
MSCS Ready, Mod 1, Fall 23
Project 5 - Creating PPM Image Files
10/10/2023
Aim - Gain experience with:
• designing algorithms
• implementing functions
• nested for loops
• multi-file programs and their Makefiles
• file i/o
*/

#include "images.h"

int make_rect(FILE *outfile, int cols, int rows, int red, int green, int blue){

	// write header
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);

	// write image array
	for (int i = 0; i < cols * rows; i++){
		fprintf(outfile, "%c%c%c", (unsigned char) red, (unsigned char) green,
			(unsigned char) blue);
	}
	return(0);

}

int stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]){

	// Declare variables
	int stripe_start;
	int stripe_end;

	// write header
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);

	// Calculate stripe width
	int stripe_width = rows / num_stripes;

	// write image array
	for (int i = 0; i < num_stripes ; i++){

		// Calculate stripe start and end
		stripe_start = i * stripe_width;

		// If we are on the last stripe, add the all the remaining rows
		if (i == num_stripes - 1){
			stripe_end = rows;
		}
		else{
			stripe_end = (i + 1) * stripe_width;
		}

		// Write the stripe
		for (int j = stripe_start; j < stripe_end; j++){
			for (int k = 0; k < cols; k++){
				fprintf(outfile, "%c%c%c", (unsigned char) reds[i], (unsigned char) greens[i], 
					(unsigned char) blues[i]);
			}
		}
	}
	return(0);
}

int vert_stripes(FILE *outfile, int cols, int rows, int num_stripes, int reds[], int greens[], int blues[]) {

    // Declare variables
    int stripe_start;
    int stripe_end;

    // write header
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);

	// Calculate stripe width
    int stripe_width = cols / num_stripes;

    // write image array
    for (int j = 0; j < rows; j++) {
        for (int i = 0; i < num_stripes; i++) {

            // Calculate stripe start and end
            stripe_start = i * stripe_width;

            // If we are on the last stripe, add all the remaining cols
            if (i == num_stripes - 1) {
                stripe_end = cols;
            }
            else {
                stripe_end = (i + 1) * stripe_width;
            }

            // Write the stripe
            for (int k = stripe_start; k < stripe_end; k++) {
                fprintf(outfile, "%c%c%c", (unsigned char)reds[i], (unsigned char)greens[i], (unsigned char)blues[i]);
            }
        }
    }
    return(0);
}

int four_square(FILE *outfile, int cols, int rows, int reds[], int greens[], int blues[]){

	// Declare variables
    int quad = 0;
	int stripe_start = 0;
    int stripe_end = cols / 2;

    // write header
	fprintf(outfile, "P6\n %d %d 255\n", cols, rows);

    // write image array
    for (int j = 0; j < rows; j++) {
		
		// Change quad if we are in the bottom half of the image
		if (j >= rows / 2){
			quad = 2;
		}

		// Write the stripe
        for (int i = 0; i < 2; i++) {
			for (int k = stripe_start; k < stripe_end; k++){
				fprintf(outfile, "%c%c%c", (unsigned char)reds[i + quad], (unsigned char)greens[i + quad], (unsigned char)blues[i + quad]);
				}

			// Change stripe start and end if we are in the second half of the image
			stripe_start = cols / 2;
			stripe_end = cols;
    	}
	}
    return(0);

}

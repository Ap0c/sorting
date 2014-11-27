// Various sorting algorithms.

/* ---------- Preprocessing ---------- */

#define MAX 20


/* ---------- Standard Modules ---------- */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* ---------- Header ---------- */

#include "sorting.h"


/* ---------- Functions ---------- */

// Swap two elements in an array.
void swap(int *array, int i, int j) {

	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;

}


// Sorts an integer array with bubblesort.
void bubblesort(int *array, int size) {

	// Flag variable for pass-through with no swaps, indicating sort complete.
	int not_complete = 0;

	// Runs while there are still swaps to be done.
	do {

		// Resets flag.
		not_complete = 0;

		// Works through, swaps adjacent elements if first greater than second.
		for (int i = 0; i < (size - 1); i++) {
			if (array[i] > array[i+1]) {
				swap(array, i, i+1);
				not_complete = 1;
			}
		}

	} while (not_complete);

}


// Generates an integer array of (bad) random numbers, between zero and MAX.
int *random_gen(int size) {

	// Seeds random number generator.
	srand(time(NULL));

	int *array = malloc(sizeof(int) * size);

	// Catches malloc failure.
	if (array == NULL) {
		fprintf(stderr, "Failed to allocate array, qutting.\n");
		exit(1);
	}

	// Populates each array element with random number.
	for (int i = 0; i < size; i++) {
		array[i] = (int) (((double) rand() / (double) RAND_MAX) * MAX);
	}

	return array;

}


// Frees an integer array.
void free_array(int *array) {

	free(array);

}


// Prints an integer array.
void print_array(int *array, int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

}
